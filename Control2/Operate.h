#ifndef OPERATE_H_
#define OPERATE_H_

/**
 * @file Operate.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Receives 3 numbers, a,b,c and depending on the value of c, it adds,rest,multiply,divide a and b.
 * @version 0.1
 * @date 2020-09-15
 */

class Operate{
    private:
    /** @brief First value, A that is operated with B.*/
        int a;
    /** @brief Second value, B that is operated with A.*/
        int b;
    /** @brief Third value, depending on the number that C is, it operates A and B.*/
        int c;
    public:
    /** @brief Construct a new Operate object */
        Operate();
        /** @brief Destroy the Operate object */
        ~Operate();
        /**
         * @brief Returns a
         * @return int 
         */
        int getA();
        /**
         * @brief Sets value for a
         * @param newA 
         */
        void setA(int newA);
        /**
         * @brief Returns b.
         * @return int 
         */
        int getB();
        /**
         * @brief Sets value for b
         * @param newB 
         */
        void setB(int newB);
        /**
         * @brief Returns c.
         * @return int 
         */
        int getC();
        /**
         * @brief sets value for c
         * @param newC 
         */
        void setC(int newC);
        /**
         * @brief Returns the product of A and B, depending on the value of C.
         * C = 1 //Sums
         * C = 2 //Rest
         * C = 3 //Multiplication
         * C = 4 //Division
         * @return double 
         */
        double resolve();
};

#endif