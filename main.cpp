#include <iostream>
#include "sensors.h"
#include "controller.h"

using namespace std;

int main() {
    Sensors sensors;
    Controller controller;

    cout << "🏠 Home Automation System\n\n";

    for (int i = 0; i < 3; i++) {
        bool motion = sensors.detectMotion();
        int lightLevel = sensors.readLightLevel();

        controller.process(lightLevel, motion);

        cout << "------------------------\n";
    }

    return 0;
}
