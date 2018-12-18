message(STATUS "***  enter src/HumanMachineInteraction/CMakeLists.txt  ***")

##################################################################
## TODO: add sources and headers
##################################################################
#add source files manually
set(HMI_SOURCES
CHmi.cpp
#add generated source files
)

#add header files manually
set(HMI_HEADERS
)

##################################################################
## TODO: add module dependant include paths
##################################################################
include_directories()
include_directories(/usr/include/glib-2.0)
include_directories(/usr/include/gio-unix-2.0)
include_directories(/usr/lib/x86_64-linux-gnu/glib-2.0/include)
include_directories(${PROJECT_ROOT}/inc/public)

##################################################################
## TODO: add module dependant link directory
##################################################################
link_directories()

add_library(HMI STATIC ${HMI_SOURCES} ${HMI_HEADERS})

target_link_libraries (HMI ${MY_DEPS})