#ifndef Grade_H
#define Grade_h
#include <string>
using namespace std;

/**
 * @file Grade.h
 * @author Ingrid Echeverri (ingrid.echeverri@correounivalle.edu.co)
 * @brief Returns the grade note in words.
 * @version 0.1
 * @date 2020-09-12
 */

class Grade{
    private:
        /** @brief note letter*/
        string note;
    public:
        /** @brief Construct a new Grade object */
        Grade();
        /** @brief Destroy the Grade object*/
        ~Grade();
        /**
         * @brief Get the Note value. (a,b,e,... etc)
         * @return string 
         */
        string getNote();
        /**
         * @brief Set the Note value ((a,b,e,... etc))
         * @param gradeLetter 
         */
        void setNote(string gradeLetter);
        /**
         * @brief Shows the note value in words.
         * a/A = aceptable
         * b/B = buena
         * E/e = excelente
         * Anything else = No se califico
         */
        void showNote();
};

#endif