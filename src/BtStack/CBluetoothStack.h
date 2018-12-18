/*
 * CBluetoothStackAdapter.h
 *
 *  Created on: Dec 7, 2018
 *      Author: uidv7600
 */

#ifndef SRC_BTSTACK_CBLUETOOTHSTACK_H_
#define SRC_BTSTACK_CBLUETOOTHSTACK_H_

// Generated Files
//#include "DBusObjectManager.h"
//#include "BlueZAdapterItf.h"

// Handlers
#include "CDiscoveryHandler.h"
#include "IBluetooth.h"

namespace btStack {

class CBluetoothStack: public IBluetooth {
public:
    CBluetoothStack();
    virtual ~CBluetoothStack();

    static void OnDbusNameAppeared(GDBusConnection* connection, const gchar* const name, const gchar* nameOwner, gpointer userData);
    static void OnDbusNameVanished(GDBusConnection* connection, const gchar* const name, gpointer userData);

    // Discovery Handler
    virtual void SetUserFriendlyName(string name);

    virtual void SetPowered(bool connectable);

    virtual void SetDiscoverable(bool discoverable);

    virtual void SetPairable(bool pairable);

    virtual void StartDiscovery();

    virtual void StopDiscovery();

    // Pair Handler

    // Connect Handler

private:
    CDiscoveryHandler* discoveryHandler;

    dbusObjManagerOrgFreedesktopDBusObjectManager *blueZObjManageProxy;
    bluezAdapterOrgBluezAdapter1 *adapterProxy;

    guint bluezWatchId;
};

} /* namespace btStack */

#endif /* SRC_BTSTACK_CBLUETOOTHSTACK_H_ */
