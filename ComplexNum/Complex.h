#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    private:
    int number;
    int complexNumber;
    public:
    Complex(int num, int num2);
    void NumAndComplex();
    void sumComplexNum(Complex num);
    void restComplexNum(Complex num);
    int getNumber();
    int getComplexNumber();
};

#endif