#include <gio/gio.h>

#include "IBluetooth.h"

#include "CBluetoothStack.h"
#include "CHmi.h"

#include <thread>
#include <iostream>

using namespace btStack;
using namespace hmi;
using namespace std;

void callThread(CHmi* hmi) {
    while (1) {
        hmi->PrintMenu();
    }
}

int main() {
    // Create a new GMainLoop structure.
    GMainLoop *loop;
    loop = g_main_loop_new(NULL, 0);

    IBluetooth* btStack = new CBluetoothStack();
    CHmi *hmi = new CHmi(btStack);

    thread t1(callThread, hmi);

    // Runs a main loop until g_main_loop_quit() is called on the loop.
    // If this is called for the thread of the loop's GMainContext, it will process events from the loop, otherwise it will simply wait.
    g_main_loop_run(loop);

    g_main_loop_unref(loop);
}

