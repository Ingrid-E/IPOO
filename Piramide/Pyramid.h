#ifndef _PYRAMID_H_
#define _PYRAMID_H_

class Pyramid{
    private:
        int altura;
    public:
        Pyramid();
        ~Pyramid();
        int getNumber();
        void setNumber(int newNumber);
        void buildPyramid();
};

#endif