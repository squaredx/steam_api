//
//  Utils.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-27.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef Utils_h
#define Utils_h

#include "MainInc.h"
unsigned int oneAtATimeHash(const char* inpStr);

void getModule(task_t task, mach_vm_address_t * start, off_t * length, const char * module, BYTE * buffer = nullptr, bool readBuffer = false);

#endif /* Utils_h */
