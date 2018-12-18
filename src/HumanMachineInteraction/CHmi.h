/*
 * CHmi.h
 *
 *  Created on: Dec 17, 2018
 *      Author: uidv7600
 */

#ifndef SRC_HUMANMACHINEINTERACTION_CHMI_H_
#define SRC_HUMANMACHINEINTERACTION_CHMI_H_

#include "IBluetooth.h"

namespace hmi {

class CHmi {
public:
    CHmi(IBluetooth *bt);
    virtual ~CHmi();

    void PrintMenu();

private:
    IBluetooth *bluetoothItf;
};

} /* namespace hmi */

#endif /* SRC_HUMANMACHINEINTERACTION_CHMI_H_ */
