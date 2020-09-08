#ifndef LIGHTBULB_H
#define LIGHTBULB_H

class LightBulb
{
public:
    ///Default Constructor
    LightBulb();
    ///Default Destructor
    ~LightBulb();
    int state;

    int getState();
    void turnOn();
    void turnOff();
};

#endif