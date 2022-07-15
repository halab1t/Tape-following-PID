#include<Wire.h>
#include<ReflectanceSensor.h>

ReflectanceSensor::ReflectanceSensor(int pinNum){
this -> pinNumber = pinNum;
pinMode(pinNumber, INPUT);
}
int ReflectanceSensor::readSensor(){
return (digitalRead(pinNumber));
}