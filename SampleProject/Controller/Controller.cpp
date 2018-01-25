//
//  Controller.cpp
//  SampleProject
//
//  Created by Li, Jian Hong on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
//    for (int index = 0; index < 10; index ++)
//    {
//        cout << "This is the " << index + 1 << " time in the loop" << endl;
//    }
    int Number[5] = { 0, 1, 2, 3, 4};
    for (int i = 0; i < 6; i ++)
    {
    cout << Number[i] << endl;
    }

    string Words[3] = { "Blue" , "Red" , "Green" };
    for (int i = 0; i < 4; i ++)
    {
        cout << Words[i] << endl;
    }
    
    double Decimal[1] = {1.23};
    cout << Decimal[0] << endl;
    
    consoleOutput();
}

void Controller :: consoleOutput()
{
    string name = "Jian Li";
    cout << name << endl;
    
    for (int i = 0; i < 32 ; i ++ )
        cout << i << endl;
    
    cout << &name << endl;
    
    cout << "Hi" << " good morning" << " how are you?" << endl;
    
}


