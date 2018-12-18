message(STATUS "***  enter src/main/CMakeLists.txt         ***")

##################################################################
## TODO: add sources and headers
##################################################################

#add additional source files manually
set(main-ubuntu_SOURCES
main.cpp
)


#add additional header files manually
set(main-ubuntu_HEADERS
)

##################################################################
## TODO: add module dependant include paths
##################################################################
include_directories(/usr/include/glib-2.0)
include_directories(/usr/include/gio-unix-2.0)
include_directories(/usr/lib/x86_64-linux-gnu/glib-2.0/include)
include_directories(${PROJECT_ROOT}/inc/public)
include_directories(${PROJECT_ROOT}/src/BtStack)
include_directories(${PROJECT_ROOT}/src/BtStack/generated)
include_directories(${PROJECT_ROOT}/src/HumanMachineInteraction)

##################################################################
## TODO: add module dependant link directory
##################################################################
link_directories()

add_executable(main-ubuntu ${main-ubuntu_SOURCES} ${main-ubuntu_HEADERS})
target_link_libraries (main-ubuntu 
BtStackBlueZ
HMI
${MY_DEPS}
pthread
)

SET_TARGET_PROPERTIES(main-ubuntu PROPERTIES OUTPUT_NAME ${OUTPUT_FILE_NAME})
