//
//  MW2Main.cpp
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-27.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#include <MainInc.h>
#include <netdb.h>
#include "Utils.h"

//31b7a0 : Com_sprintf();
//337f33 : int _WinMain(int arg0, int arg1, int arg2)

//1ac5b1 : int CG_DrawScoreboardi(int arg_0)
//33718e : int Win_LocalizeRef(const char * arg_0)

// 2a6b49: Com_Error(errorParm_t, char const*, ...)

hostent* (*ori_gethostbyname)(const char*) = NULL;
const char* (*ori_Win_LocalizeRef)(const char*) = NULL;

typedef const char* (__cdecl * Win_LocalizeRef_t)(const char* arg0);
extern Win_LocalizeRef_t Win_LocalizeRef;

Win_LocalizeRef_t Win_LocalizeRef = (Win_LocalizeRef_t)0x33718e;

static hostent* my_gethostbyname(const char* name)
{
    printf("gethostbyname(\"%s\")\n", name);
    unsigned int current = oneAtATimeHash(name);
    
    unsigned int auth = oneAtATimeHash("dlc1-auth1.mac.iw4.iwnet.infinityward.com");
    unsigned int match = oneAtATimeHash("dlc1-match1.mac.iw4.iwnet.infinityward.com");
    unsigned int blob = oneAtATimeHash("dlc1-blob1.mac.iw4.iwnet.infinityward.com");
    unsigned int team = oneAtATimeHash("dlc1-team1.mac.iw4.iwnet.infinityward.com");
    unsigned int ip = oneAtATimeHash("dlc1-ip1.mac.iw4.iwnet.infinityward.com");
    unsigned int log = oneAtATimeHash("dlc1-log1.mac.iw4.iwnet.infinityward.com");
    
    if (current == auth || current == match || current == blob || current == team || current == ip || current == log)
    {
        *(int8*)0x1b01da1 = 1;
        return ori_gethostbyname(name);
        //return original("127.0.0.1");
        
    }
    
    return ori_gethostbyname(name);
}

static const char* my_Win_LocalizeRef(const char* arg)
{
    const char* temp = ori_Win_LocalizeRef(arg);
    printf("GETTING LOCALIZATION:\nKEY: %s\nLOC: %s\n",arg, temp);
    return temp;
}

//Possible Console menu flag 0x1b01da1


void ModInit()
{
    //Get the base address for the MW2 process and the length
    //of the process so we can unprotect it
//    kern_return_t kern_return;
//    task_t task;
//    
//    kern_return = task_for_pid(mach_task_self(), getpid(), &task);
//    if (kern_return != KERN_SUCCESS)
//    {
//        printf("task_for_pid() failed, error %d - %s\n", kern_return, mach_error_string(kern_return));
//        exit(1);
//    }
//    
//    off_t moduleLength = 0;
//    mach_vm_address_t moduleStartAddress;
//    getModule(task, &moduleStartAddress, &moduleLength, "/COD_MW2_MPsub");
//    
//    if (task) {
//        printf("Found the COD_MW2_MPsub address: 0x%llx \n", moduleStartAddress);
//        printf("Module should end at 0x%llx\n", moduleStartAddress + moduleLength);
//    } else {
//        printf("Failed to get the COD_MW2_MPsub address\n");
//        exit(0); // we exit here because there is no task for this pid
//    }
//    
//    //we need to allow write access on the process
//    kern_return_t prot_ret;
//    //probably not a good idea to give all permission to the process memory space...but it works
//    prot_ret = vm_protect(task, moduleStartAddress, moduleLength, false, VM_PROT_ALL);
//    if(prot_ret != KERN_SUCCESS)
//    {
//        printf("vm_protect failed. error %d - %s\n",prot_ret, mach_error_string(prot_ret));
//        exit(1);
//    }
//    
//    if(rd_route((void*)(Win_LocalizeRef), (void*)(my_Win_LocalizeRef), (void**)&ori_Win_LocalizeRef) != KERN_SUCCESS)
//    {
//        printf("So this isnt working...\n");
//        exit(0);
//    }
//    
//    printf("old version: %s\n", (char *)(0x3abc19));
//    strcpy((char *)0x3abc19, "1337");
//    printf("new version: %s\n", (char *)(0x3abc19));
//    printf("mod has been initialized\n");
//    
//    printf("Using Win_LocalizeRef('WIN_NO_STEAM') = %s\n", Win_LocalizeRef("WIN_NO_STEAM"));
//    
//    rd_route((void*)(gethostbyname), (void*)(my_gethostbyname), (void **)&ori_gethostbyname);
    
}
