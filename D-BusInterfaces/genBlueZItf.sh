#!/bin/bash

gdbus-codegen --generate-c-code BlueZAdapterItf --c-generate-object-manager --c-namespace bluezAdapter org.bluez.Adapter1.xml

gdbus-codegen --generate-c-code DBusObjectManager --c-generate-object-manager --c-namespace dbusObjManager org.freedesktop.DBus.ObjectManager.xml
