//
//  readint.cpp
//  HW3-2
//
//  Created by Nate Esrey on 2/21/18.
//  Copyright © 2018 Nate Esrey. All rights reserved.
//

#include "readint.hpp"
#include <iostream>
#include <stdexcept>
#include <stdio.h> 

using namespace std;

int read_int(const string &prompt, int low, int high)

//test to see if the range is valid. The low number cannot be greater than the higher range value
{
    cin.exceptions(ios::failbit | ios::badbit);
    int range = 0;
    if (low >= high) {
        throw(invalid_argument( "Invalid range high is less than low or low is more than high.\n"));
    }
    
    //test to see if the value entered is in the initial range.
    while (true) {
        try {
            cout << prompt;
            cin >> range;
            
            if (range <= low || range >= high) {
                throw(range_error("The range number inputed is out of range\n"));
            }
            return range;
        }
        catch (range_error& e) {
            cout << e.what();
        }
        //test in case an invalid input is recorded
        catch(ios_base::failure &ex){
            cout << "you put in a invlaid input\n";
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
        }
        
        
    }
}
