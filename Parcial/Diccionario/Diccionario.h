#ifndef DICCIONARIO_H_
#define DICCIONARIO_H_
#include <vector>
using namespace std;

class Diccionario
{
private:
    //Atributes
    vector<char> diccionarios;
    int pivot;

public:
    /**
     * @brief Construct a new Diccionario object
     * 
     */
    Diccionario();
    /**
     * @brief Construct a new Diccionario object
     * 
     * @param nDiccionario 
     */
    Diccionario(char nDiccionario);
    /**
     * @brief Destroy the Diccionario object
     * 
     */
    ~Diccionario();

};

#endif