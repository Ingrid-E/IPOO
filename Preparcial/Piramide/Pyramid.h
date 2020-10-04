#ifndef PYRAMID_H_
#define PYRAMID_H

class Pyramid{
    private:
    double base;
    double height;
    double area;
    double volume;
    public:
    Pyramid();
    Pyramid(double newBase, double newHeight);
    ~Pyramid();
    double getBase();
    double getHeight();
    double getArea();
    double getVolume();   
};

#endif
