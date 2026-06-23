#include <iostream>
#include "controller.h"
#include "device.h"

using namespace std;

void Controller::process(int lightLevel, bool motionDetected) {
    Device device;

    cout << "Light Level: " << lightLevel << endl;
    cout << "Motion Detected: " << (motionDetected ? "YES" : "NO") << endl;

    if (lightLevel < 40 && motionDetected) {
        device.controlLight(true);
    } else {
        device.controlLight(false);
    }

    if (lightLevel > 60) {
        device.controlFan(true);
    } else {
        device.controlFan(false);
    }
}








