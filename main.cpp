/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <iostream>


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms
UnbufferedSerial pc(USBTX,USBRX,9600);
using namespace std;

BusOut myLeads(D2,D3,D4,D5,D6,D7,D8,D9);



int main()
{
    
    while (true) {
    // Initialise the digital pin LED1 as an output
        int num;
        cout<<"Ingrese el numero del 0-9: \n"<<endl;
        cin>>num;
        switch (num) {
            case 0:
                myLeads.write(63);
                break;
            case 1:
                myLeads.write(6);
                break;
            case 2:
                myLeads.write(91);
                break;
            case 3:
                myLeads.write(79);
                break;
            case 4:
                myLeads.write(102);
                break;
            case 5:
                myLeads.write(109);
                break;
            case 6:
                myLeads.write(125);
                break; 
            case 7:
                myLeads.write(7);
                break;
            case 8:
                myLeads.write(127);
                break;
            case 9:
                myLeads.write(111);
                break;
            default:
                cout<<"Numero impedido \n"<<endl;
                break;

        }
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
