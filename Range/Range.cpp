/*
 *  Range.cpp
 *  Range
 *
 *  Created by Jackson Kearl on 6/25/17.
 *  Copyright © 2017 JK:GY. All rights reserved.
 *
 */

#include <iostream>
#include "Range.hpp"
#include "RangePriv.hpp"

void Range::HelloWorld(const char * s)
{
    RangePriv *theObj = new RangePriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void RangePriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

