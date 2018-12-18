/*
 * CHmi.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: uidv7600
 */

#include "CHmi.h"
#include <iostream>

using namespace std;

namespace hmi {

CHmi::CHmi(IBluetooth *bt) {
    bluetoothItf = bt;
}

void CHmi::PrintMenu() {
    int myChoice = 0;

    cout << endl;
    cout << "********** Main Menu **********" << endl;
    cout << "(1): Set User Friendly Name" << endl;
    cout << "(2): Option 2" << endl;
    cout << "(3): Option 3" << endl;
    cin >> myChoice;

    switch(myChoice)
    {
    case 1:
        bluetoothItf->SetUserFriendlyName("Hello Bluetooth World!");
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        cout << "ERROR! You have selected an invalid choice." << endl;
        break;
    }
}

CHmi::~CHmi() {
}

} /* namespace hmi */
