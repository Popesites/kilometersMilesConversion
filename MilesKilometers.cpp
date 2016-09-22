//  MilesKilometers.cpp
//  Created by Conner Pope on 9/21/16.
//  Copyright © 2016 Conner Pope. All rights reserved.
// //
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {
    
    float baseKilometer = 0.621,
          baseMile = 1.61,
          userKilo,
          result,
          userMiles;
    char o;
    
    string input,
           miles,
           kilometers;
    stringstream SS;
    
    
    cout << "Hello. Choose what function you'd like to do.\n1: Convert miles to kilometers\n2: Convert kilometers to miles\n3: Quit\nPlease input either 1, 2 or 3: ";
    getline(cin, input);
    SS << input;
    SS >> o;
    
    switch(o) {
            case '1' : cout <<"Please input the miles to be converted: ";
                        getline(cin, miles);
                        SS << miles;
                        SS >> userMiles;
                            result = baseMile * userMiles;
                            if (userMiles > 1) {
                        cout << userMiles << " miles are equal to " << result << " kilometers." << endl;
                            }
                            else {
                cout << userMiles << " mile is equal to " << result << " kilometers." << endl;
                            }
                    break;
            case '2' : cout << "Please input the kilometers to be converted: ";
                        getline(cin, kilometers);
                        SS << kilometers;
                        SS >> userKilo;
                            result = baseKilometer * userKilo;
                            if (userKilo > 1) {
                        cout << userKilo << " kilometer(s) are equal to " << result << " miles." << endl;
                            }
                            else {
                                cout << userKilo << " kilometer is equal to " << result << " miles." << endl;
                            }
                    break;
            case '3' : cout << "Goodbye." << endl;
                    break;
            default: cout << "Error in input, please try again.";
                    break;
    }
    
    return 0;
}
