/*
 *  HW3_2_1.cpp
 *  HW3-2-1
 *
 *  Created by Nate Esrey on 2/21/18.
 *  Copyright © 2018 Nate Esrey. All rights reserved.
 *
 */

#include <iostream>
#include "HW3_2_1.hpp"
#include "HW3_2_1Priv.hpp"

void HW3_2_1::HelloWorld(const char * s)
{
    HW3_2_1Priv *theObj = new HW3_2_1Priv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void HW3_2_1Priv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

