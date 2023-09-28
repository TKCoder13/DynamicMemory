#pragma once

#include <iostream>
using namespace std;

class Object
{
    public: 
        int x;
        int *p;
    
    public:
        // -- default constructor must be written down
        Object(): 
        x(0) {
            p = new int[3];
        } 

        Object(int x): 
        x(x) {
            p = new int[3];
        }

        ~Object() 
        {
            cout << "Destructing an Object" << endl;
            delete[] p;
        }

};