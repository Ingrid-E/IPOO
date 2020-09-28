#ifndef OPERATION_H_
#define OPERATION_H_
#include <string>
using namespace std;


class Operation{
    private:
    int numeros[1000];
    int pivot;
    int size;
    void setSize(int nSize);
    Operation();
    public:
    Operation(int nSize);
    ~Operation();
    int getSize();
    int getPivot();
    void append(int newNum);
    double resultado(string operacion);

};

#endif
