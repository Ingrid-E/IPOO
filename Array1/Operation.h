#ifndef OPERATION_H_
#define OPERATION_H_
#include <string>
using namespace std;


class Operation{
    private:
    int numeros[10000000];
    int pivot;
    int size;
    Operation();
    void setSize(int nSize);
    public:
    Operation(int nSize);
    ~Operation();
    int getSize();
    int getPivot();
    void append(int newNum);
    double resultado(string operacion);

};

#endif
