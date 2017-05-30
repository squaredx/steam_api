/*
 *  steam_api.cpp
 *  steam_api
 *
 *  Created by Jason Wolfe on 2017-05-30.
 *  Copyright © 2017 Jason Wolfe. All rights reserved.
 *
 */

#include <iostream>
#include "steam_api.hpp"
#include "steam_apiPriv.hpp"

void steam_api::HelloWorld(const char * s)
{
    steam_apiPriv *theObj = new steam_apiPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void steam_apiPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

