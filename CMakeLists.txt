cmake_minimum_required(VERSION 3.6)

##################################################################
## configure the project
##################################################################
project(BluetoothPracticaConti)
set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(OUTPUT_FILE_NAME "BluetoothPracticaConti")
set(MY_DEPS glib-2.0 gio-2.0 gobject-2.0 dbus-1)

#configure_file(${PROJECT_ROOT}/build/src/main/${OUTPUT_FILE_NAME} ${PROJECT_ROOT}/output COPYONLY)

##################################################################
## DO NOT MODIFY - configure pkg-config
##################################################################
find_package(PkgConfig REQUIRED)

##################################################################
## TODO: add packages with pkg-config
##################################################################
pkg_check_modules(${MY_DEPS} REQUIRED)

add_compile_options(-std=c++11)
 
add_subdirectory(src/main)
add_subdirectory(src/BtStack)
add_subdirectory(src/HumanMachineInteraction)