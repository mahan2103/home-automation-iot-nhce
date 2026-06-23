#include <iostream>
#include "device.h"

using namespace std;

void Device::controlLight(bool state) {
    if (state)
        cout << "[ACTION] Lights ON\n";
    else
        cout << "[ACTION] Lights OFF\n";
}

void Device::controlFan(bool state) {
    if (state)
        cout << "[ACTION] Fan ON\n";
    else
        cout << "[ACTION] Fan OFF\n";
}
