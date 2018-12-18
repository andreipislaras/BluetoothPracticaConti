/*
 * CDiscoveryHandler.h
 *
 *  Created on: Dec 17, 2018
 *      Author: uidv7600
 */

#ifndef SRC_BTSTACK_CDISCOVERYHANDLER_H_
#define SRC_BTSTACK_CDISCOVERYHANDLER_H_

#include "BlueZAdapterItf.h"
#include "DBusObjectManager.h"
#include "IBtDiscover.h"

namespace btStack {

class CDiscoveryHandler : public IBtDiscover {
public:
    CDiscoveryHandler();
    virtual ~CDiscoveryHandler();

    static void onSignal_InterfacesAdded(GObject* object, const gchar* objectPath, GVariant* interfaces, gpointer userData);
    static void onSignal_InterfacesRemoved(GObject* object, const gchar* objectPath, const gchar* const * interfaces, gpointer userData);

    // IBtDiscover interface
    virtual void SetUserFriendlyName(string name);

    virtual void SetPowered(bool connectable);

    virtual void SetDiscoverable(bool discoverable);

    virtual void SetPairable(bool pairable);

    virtual void StartDiscovery();

    virtual void StopDiscovery();


    void SetObjectManagerProxy(dbusObjManagerOrgFreedesktopDBusObjectManager *proxy);
    void SetAdapterProxy(bluezAdapterOrgBluezAdapter1 *proxy);

private:
    dbusObjManagerOrgFreedesktopDBusObjectManager *blueZObjManageProxy;
    bluezAdapterOrgBluezAdapter1 *adapterProxy;

    gulong m_itfAddedSignalId;
    gulong m_itfRemovedSignalId;
};

} /* namespace btStack */

#endif /* SRC_BTSTACK_CDISCOVERYHANDLER_H_ */
