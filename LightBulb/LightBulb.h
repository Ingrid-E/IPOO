#ifndef LIGHTBULB_H
#define LIGHTBULB_H

/**
 * @file LightBulb.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Create an object that represents a light bulb and see if it's on or off
 * @version 0.1
 * @date 2020-09-07
 */

class LightBulb
{
public:
    /**
     * @brief Construct a new Light Bulb object
     */
    LightBulb();
    /**
     * @brief Destroy the Light Bulb object
     */
    ~LightBulb();
    /**
     * 0-Off
     * 1-On
     * @brief State variable, that indicates if the light bulb is on or off.
     */
    int state;
    /**
     * @brief Gets and returns the LightBulb state. 0: OFF // 1: ON
     * @return int 
     */
    int getState();
    /**
     * @brief Changes LightBulb State to 1 = ON
     */
    void turnOn();
    /**
     * @brief Changes LightBulb State to 0 = OFF
     */
    void turnOff();
};

#endif