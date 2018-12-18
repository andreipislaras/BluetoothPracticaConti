/*
 * CBluetoothStackAdapter.cpp
 *
 *  Created on: Dec 7, 2018
 *      Author: uidv7600
 */

#include "CBluetoothStack.h"

#include <iostream>

namespace btStack {

CBluetoothStack::CBluetoothStack():
                discoveryHandler(NULL),
                adapterProxy(NULL),
                bluezWatchId(0) {

    discoveryHandler = new CDiscoveryHandler();

    //Create the bluez watch id
    bluezWatchId = g_bus_watch_name (G_BUS_TYPE_SYSTEM, "org.bluez", G_BUS_NAME_WATCHER_FLAGS_NONE,
            &OnDbusNameAppeared,
            &OnDbusNameVanished,
            this, NULL);
}

CBluetoothStack::~CBluetoothStack() {
    if(discoveryHandler != NULL) {
        delete discoveryHandler;
    }

    g_bus_unwatch_name(bluezWatchId);
}

void CBluetoothStack::OnDbusNameAppeared(GDBusConnection* connection, const gchar* const name, const gchar* nameOwner, gpointer userData) {

    cout << "CBluetoothStack::OnDbusNameAppeared -> name: " << name << endl;

    CBluetoothStack* stackAdapter = reinterpret_cast<CBluetoothStack*>(userData);
    if(NULL != stackAdapter) {
        GError *pError = NULL;
        string strName(name);
        if(strName == "org.bluez") {
            stackAdapter->blueZObjManageProxy = dbus_obj_manager_org_freedesktop_dbus_object_manager_proxy_new_for_bus_sync(G_BUS_TYPE_SYSTEM, G_DBUS_PROXY_FLAGS_NONE,
                    "org.bluez", "/", NULL, &pError);
            stackAdapter->adapterProxy = bluez_adapter_org_bluez_adapter1_proxy_new_for_bus_sync(G_BUS_TYPE_SYSTEM, G_DBUS_PROXY_FLAGS_NONE,
                    "org.bluez", "/org/bluez/hci0", NULL, &pError);

            stackAdapter->discoveryHandler->SetObjectManagerProxy(stackAdapter->blueZObjManageProxy);
            stackAdapter->discoveryHandler->SetAdapterProxy(stackAdapter->adapterProxy);
        }
    }
}

void CBluetoothStack::OnDbusNameVanished(GDBusConnection* connection, const gchar* const name, gpointer userData) {
    cout << "CBluetoothStack::OnDbusNameVanished -> name: " << name << endl;
}

// Discovery Handler
void CBluetoothStack::SetUserFriendlyName(string name) {
    discoveryHandler->SetUserFriendlyName(name);
}

void CBluetoothStack::SetPowered(bool connectable) {
    discoveryHandler->SetPowered(connectable);
}

void CBluetoothStack::SetDiscoverable(bool discoverable) {
    discoveryHandler->SetDiscoverable(discoverable);
}

void CBluetoothStack::SetPairable(bool pairable) {
    discoveryHandler->SetPairable(pairable);
}

void CBluetoothStack::StartDiscovery() {
    discoveryHandler->StartDiscovery();
}

void CBluetoothStack::StopDiscovery() {
    discoveryHandler->StopDiscovery();
}

} /* namespace btStack */
