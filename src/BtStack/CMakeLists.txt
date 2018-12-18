message(STATUS "***  enter src/BtStack/CMakeLists.txt  ***")

##################################################################
## TODO: add sources and headers
##################################################################
#add source files manually
set(BtStack_SOURCES
CBluetoothStack.cpp
CDiscoveryHandler.cpp
CPariHandler.cpp
#add generated source files
generated/BlueZAdapterItf.c
generated/DBusObjectManager.c
)

#add header files manually
set(BtStack_HEADERS
)

##################################################################
## TODO: add module dependant include paths
##################################################################
include_directories()
include_directories(/usr/include/glib-2.0)
include_directories(/usr/include/gio-unix-2.0)
include_directories(/usr/lib/x86_64-linux-gnu/glib-2.0/include)
include_directories(${PROJECT_ROOT}/inc/public)
include_directories(${PROJECT_ROOT}/src/BtStack/generated)

##################################################################
## TODO: add module dependant link directory
##################################################################
link_directories()

add_library(BtStackBlueZ STATIC ${BtStack_SOURCES} ${BtStack_HEADERS})

target_link_libraries (BtStackBlueZ ${MY_DEPS})