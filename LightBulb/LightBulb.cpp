#include "LightBulb.h"

LightBulb::LightBulb(){
    state = 0;
}
LightBulb::~LightBulb(){}

int LightBulb::getState(){
    return state;
}
void LightBulb::turnOff(){
    state = 0;
}
void LightBulb::turnOn(){
    state = 1;
}
