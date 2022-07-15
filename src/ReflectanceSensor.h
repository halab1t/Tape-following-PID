#include <Wire.h>
#ifndef REFLECTANCE_SENSOR_H
#define REFLECTANCE_SENSOR_H
class ReflectanceSensor
{
private:
    int pinNumber;
public:
    ReflectanceSensor(int pinNum);
    int readSensor();
};
#endif
