#ifndef COMPLEX_H
#define COMPLEX_H

/**
 * @file Complex.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Represents complex numbers.
 * @version 0.1
 * @date 2020-09-13
 */

class Complex {
    private:
    /** @brief normal number */
    int number;
    /** @brief complex number */
    int complexNumber;
    public:
    /**
     * @brief Construct a new Complex object
     * 
     * @param num // Normal Number
     * @param num2 // Complex Number
     */
    Complex(int num, int num2);
    /** @brief Destroy the Complex object */
    ~Complex();
    /** @brief Returns number + complex number */
    void NumAndComplex();
    /**
     * @brief Sums complex numbers.
     * @param num 
     */
    void sumComplexNum(Complex num);
    /**
     * @brief Rest complex numbers.
     * @param num 
     */
    void restComplexNum(Complex num);
    /** @brief Returns number*/
    int getNumber();
    /** @brief Returns complex number*/
    int getComplexNumber();
};

#endif