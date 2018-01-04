//
//  MainInc.h
//  steam_api
//
//  Created by Jason Wolfe on 2017-06-22.
//  Copyright © 2017 Jason Wolfe. All rights reserved.
//

#ifndef MainInc_h
#define MainInc_h

#define PRINTDEBUG() printf("::%s()\n", __FUNCTION__)

#define NO_STEAM
#include "SteamTypes.h"
#include "CCallback.h"
#include "ISteamUser012.h"
#include "ISteamUtils005.h"
#include "ISteamApps007.h"
#include "ISteamRemoteStorage012.h"
#include "ISteamNetworking005.h"
#include "ISteamFriends015.h"
#include "ISteamMatchmaking007.h"
#include "ISteamGameServer009.h"

#include "rd_route.h"

#include <mach/mach.h>
#include <mach/mach_vm.h>
#include <mach/vm_region.h>
#include <mach-o/dyld_images.h>
#include <libproc.h>

//typedefs
typedef unsigned char BYTE;
typedef unsigned long DWORD;

//prototypes

void ModInit();

#endif /* MainInc_h */
