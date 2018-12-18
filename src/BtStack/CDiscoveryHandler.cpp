/*
 * CDiscoveryHandler.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: uidv7600
 */

#include "CDiscoveryHandler.h"

#include <iostream>

namespace btStack {

CDiscoveryHandler::CDiscoveryHandler():
        blueZObjManageProxy(NULL),
        adapterProxy(NULL),
        m_itfAddedSignalId(0),
        m_itfRemovedSignalId(0) {

}

CDiscoveryHandler::~CDiscoveryHandler() {
    blueZObjManageProxy = NULL;
    adapterProxy = NULL;

    if(m_itfAddedSignalId != 0) {
        g_signal_handler_disconnect(blueZObjManageProxy, m_itfAddedSignalId);
    }
    if(m_itfRemovedSignalId != 0) {
        g_signal_handler_disconnect(blueZObjManageProxy, m_itfRemovedSignalId);
    }
}

void CDiscoveryHandler::onSignal_InterfacesAdded(GObject* object, const gchar* objectPath, GVariant* interfaces, gpointer userData) {
    // For each founded device a new interface will appear.
    // Can be printed/stored objectPath

    CDiscoveryHandler* discoveryHandler = reinterpret_cast<CDiscoveryHandler*>(userData);
    if(NULL != discoveryHandler) {
        string strObjectPath(objectPath);
        cout << "CDiscoveryHandler::InterfacesAdded -> Object Path: " << strObjectPath << endl;
    }
}

void CDiscoveryHandler::onSignal_InterfacesRemoved(GObject* object, const gchar* objectPath, const gchar* const * interfaces, gpointer userData) {

}

void CDiscoveryHandler::SetUserFriendlyName(string name) {
    if(adapterProxy != NULL) {
        cout << "CDiscoveryHandler::SetUserFriendlyName -> name: " << name << endl;
        bluez_adapter_org_bluez_adapter1_set_alias(adapterProxy, name.c_str());
    }
}

void CDiscoveryHandler::SetPowered(bool connectable) {
    // add your code
    // it is similar with SetUserFriendlyName
}

void CDiscoveryHandler::SetDiscoverable(bool discoverable) {
    // add your code
    // it is similar with SetUserFriendlyName
}

void CDiscoveryHandler::SetPairable(bool pairable) {
    // add your code
    // it is similar with SetUserFriendlyName
}

void CDiscoveryHandler::StartDiscovery() {
    GError *pError = NULL;
    if(adapterProxy != NULL) {
        bluez_adapter_org_bluez_adapter1_call_start_discovery_sync(adapterProxy, NULL, &pError);
    }
}

void CDiscoveryHandler::StopDiscovery() {
    GError *pError = NULL;
    if(adapterProxy != NULL) {
        bluez_adapter_org_bluez_adapter1_call_stop_discovery_sync(adapterProxy, NULL, &pError);
    }
}

void CDiscoveryHandler::SetObjectManagerProxy(dbusObjManagerOrgFreedesktopDBusObjectManager *proxy) {

    blueZObjManageProxy = proxy;

    if(blueZObjManageProxy != NULL) {

        //connect to properties-changed signal
        m_itfAddedSignalId = g_signal_connect(G_OBJECT(blueZObjManageProxy), "interfaces-added", G_CALLBACK(onSignal_InterfacesAdded), this);
        //m_itfRemovedSignalId = g_signal_connect(G_OBJECT(blueZObjManageProxy), "interfaces-removed", G_CALLBACK(onSignal_InterfacesRemoved), this);
    }
}

void CDiscoveryHandler::SetAdapterProxy(bluezAdapterOrgBluezAdapter1 *proxy) {
    adapterProxy = proxy;
}

} /* namespace btStack */
