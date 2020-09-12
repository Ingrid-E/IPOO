#ifndef PAIRS_H_
#define PAIRS_H_

/**
 * @file Pairs.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Calcule the pair number of a given list by the user, using 
 * While, For and Do-While.
 * @version 0.1
 * @date 2020-09-12
 */

class Pairs
{
private:
    /** @brief Range of numbers, inputted by the user */
    int range;
    /** @brief Result for pair numbers of range, using while*/
    int withWhile;
    /** @brief Result for pair numbers of range, using for*/
    int withFor;
   /** @brief Result for pair numbers of range, using Do-While*/
    int withDoWhile;

public:
    /** @brief Construct a new Pares object */
    Pairs();
    /** @brief Destroy the Pares object */
    ~Pairs();
    /**
     * @brief Set the range of values
     * @param num 
     */
    void setRange(double num);
    /**
     * @brief Returns the pair numbers of the given range by the user
     * using the method While.
     * @return int 
     */
    int getWithWhile();
    /**
     * @brief Returns the pair number of the given range by the user
     * using For.
     * @return int 
     */
    int getWithFor();
    /**
     * @brief Returns the pair number of the given range by the user
     * using Do-While.
     * @return int 
     */
    int getwithDoWhile();
};

#endif