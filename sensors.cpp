#include "sensors.h"
#include <cstdlib>

bool Sensors::detectMotion() {
    return rand() % 2;  // 0 = no motion, 1 = motion detected
}

int Sensors::readLightLevel() {
    return rand() % 100;  // 0–100 light intensity
}
