//
//  Utils.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-27.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//
#include "Utils.h"

unsigned int oneAtATimeHash(const char* inpStr)
{
    unsigned int value = 0,temp = 0;
    for(size_t i=0;i<strlen(inpStr);i++)
    {
        char ctext = tolower(inpStr[i]);
        temp = ctext;
        temp += value;
        value = temp << 10;
        temp += value;
        value = temp >> 6;
        value ^= temp;
    }
    temp = value << 3;
    temp += value;
    unsigned int temp2 = temp >> 11;
    temp = temp2 ^ temp;
    temp2 = temp << 15;
    value = temp2 + temp;
    if(value < 2) value += 2;
    return value;
}

void getModule(task_t task, mach_vm_address_t * start, off_t * length, const char * module, BYTE * buffer, bool readBuffer)
{
    struct task_dyld_info dyld_info;
    mach_vm_address_t address = 0;
    mach_msg_type_number_t count = TASK_DYLD_INFO_COUNT;
    if (task_info(task, TASK_DYLD_INFO, (task_info_t)&dyld_info, &count) == KERN_SUCCESS)
    {
        address = dyld_info.all_image_info_addr;
    }
    
    struct dyld_all_image_infos *dyldaii;
    mach_msg_type_number_t size = sizeof(dyld_all_image_infos);
    vm_offset_t readMem;
    kern_return_t kr = vm_read(task, address, size, &readMem, &size);
    if (kr != KERN_SUCCESS)
    {
        return;
    }
    
    dyldaii = (dyld_all_image_infos *) readMem;
    int imageCount = dyldaii->infoArrayCount;
    mach_msg_type_number_t dataCnt = imageCount * 24;
    struct dyld_image_info *g_dii = NULL;
    g_dii = (struct dyld_image_info *) malloc (dataCnt);
    // 32bit bs 64bit
    kern_return_t kr2 = vm_read(task, (mach_vm_address_t)dyldaii->infoArray, dataCnt, &readMem, &dataCnt);
    if (kr2)
    {
        return;
    }
    struct dyld_image_info *dii = (struct dyld_image_info *) readMem;
    for (int i = 0; i < imageCount; i++)
    {
        dataCnt = 1024;
        vm_read(task, (mach_vm_address_t)dii[i].imageFilePath, dataCnt, &readMem, &dataCnt);
        char *imageName = (char *)readMem;
        if (imageName)
        {
            g_dii[i].imageFilePath = strdup(imageName);
        }
        else
        {
            g_dii[i].imageFilePath = NULL;
        }
        g_dii[i].imageLoadAddress = dii[i].imageLoadAddress;
        if (strstr(imageName, module) != NULL)
        {
            struct stat st;
            stat(imageName, &st);
            *start = (mach_vm_address_t)dii[i].imageLoadAddress;
            
            *length = st.st_size;
        }
    }
}

