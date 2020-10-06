#ifndef STRING_H_
#define STRING_H_

/**
 * @file String.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Create a string like class.
 * @version 0.1
 * @date 2020-09-18
 */

class String{
    private:
        /** @brief word in char array, base lenght of 100*/
        char word[100];
        /** @brief Last position a char was put */
        int pivot;
        /** @brief length of the string */
        int stringLength;
    public:
        /**
         * @brief Construct a new String object
         * 
         */
        String();
        /**
         * @brief Construct a new String object
         * @param newWord //New word string
         */
        String(char newWord);
        /**
         * @brief Destroy the String object
         * 
         */
        ~String();
        /**
         * @brief Returns the length of the string.
         * 
         * @return int 
         */
        int length();
        /**
         * @brief Inserts a letter, into index position.
         * 
         * @param letter // new Char letter.
         * @param index // Index position
         */
        void insert(char letter, int index);
        /**
         * @brief prints string with changes made.
         * 
         */
        void printString();

        void compare(String secondWord);

        char getWord(int index);

        void delet(String secondWord);
        

};

#endif