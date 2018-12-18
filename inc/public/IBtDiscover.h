/*
 * IBtDiscover.h
 *
 *  Created on: Dec 17, 2018
 *      Author: uidv7600
 */

#ifndef INC_PUBLIC_IBTDISCOVER_H_
#define INC_PUBLIC_IBTDISCOVER_H_

#include <string>
using namespace std;

class IBtDiscover {
public:
    virtual void SetUserFriendlyName(string name) = 0;

    virtual void SetPowered(bool connectable) = 0;

    virtual void SetDiscoverable(bool discoverable) = 0;

    virtual void SetPairable(bool pairable) = 0;

    virtual void StartDiscovery() = 0;

    virtual void StopDiscovery() = 0;
};

#endif /* INC_PUBLIC_IBTDISCOVER_H_ */
