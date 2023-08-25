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





int main()
{
    BusOut myLeads(D2,D3,D4,D5,D6,D7,D8,D9);
    
    while (true) {
    // Initialise the digital pin LED1 as an output
        int num;
        do {
        cout << "Ingrese un número entre 0 y 9: ";
        cin >> num;

        if (num < 0 || num > 9) {
            cout << "Número fuera del rango. Por favor, ingrese un número entre 0 y 9." << endl;
        }
    } while (num < 0 || num > 9);

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
            

        }
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
