#ifndef FUNCTION_H_
#define FUNCTION_H_
#include <string>
using namespace std;

class Function{
    private:
    const double PI = 3.141592653589793238463;
    double intervalos;
    string functionToGraph;
    double amplitude;
    double period;
    string type;
    

    public:
    Function();
    Function(string newFunction);
    ~Function();
    void graphic();
    void points();
    double getPeriod();
    double getAmplitude();
    double getIntervalos();
    string getType();
};

#endif