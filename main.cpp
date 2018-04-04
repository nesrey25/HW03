//
//  main.cpp
//  unitTest
//
//  Created by Nate Esrey on 2/21/18.
//  Copyright © 2018 Nate Esrey. All rights reserved.
//


#include <stdio.h>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "readint.hpp"
#include "gtest/gtest.hpp"

using namespace std;


 // Test suite for read_int()
    
    TEST(readIntTest, Case1) // Test case 1: invalid input
    {
        ifstream ss("zeroinput.txt");
        
        if (ss.fail())
            throw int(-1);
        
        streambuf *orig_cin = cin.rdbuf(ss.rdbuf());
        
        EXPECT_EQ(0, read_int("My prompt: ", -3, 3));
        
        cin.rdbuf(orig_cin);
        ss.close();
    }

    TEST(readIntTest, Case2) // Test case 2: for invalid argument
    {
        ifstream ss("zeroinput.txt");
        
        if (ss.fail())
            throw int(-1);
        
        streambuf *orig_cin = cin.rdbuf(ss.rdbuf());
        
        EXPECT_EQ(0, read_int("My prompt: ", 5, 1));
        
        cin.rdbuf(orig_cin);
        ss.close();
    }
    TEST(readIntTest, Case3) // Test case 3
    {
        ifstream ss("zeroinput.txt");
        
        if (ss.fail())
            throw int(-1);
        
        streambuf *orig_cin = cin.rdbuf(ss.rdbuf());
        
        EXPECT_EQ(0, read_int("My prompt: ", 0, 4) 3 );
        
        cin.rdbuf(orig_cin);
        ss.close();
    }
    TEST(readIntTest, Case4) // Test Case 4
    {
        ifstream ss("zeroinput.txt");
        
        if (ss.fail())
            throw int(-1);
        
        streambuf *orig_cin = cin.rdbuf(ss.rdbuf());
        
        EXPECT_EQ(0, read_int("My prompt: ", 0, 0));
        
        cin.rdbuf(orig_cin);
        ss.close();
    }
};
   
