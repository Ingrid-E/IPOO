#include "Function.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

Function::Function()
{
    intervalos = PI / 20;
    functionToGraph = "0";
    amplitude = 1;
    period = (PI / 2);
    type = "";
}

Function::Function(string newFunction)
{
    functionToGraph = newFunction;
    //Set period and amplitud.
    if (functionToGraph.substr(0, functionToGraph.find("S")) == "" || functionToGraph.substr(0, functionToGraph.find("s")) == "" || functionToGraph.substr(0, functionToGraph.find("c")) == "" || functionToGraph.substr(0, functionToGraph.find("C")) == "")
    {
        period = (PI / 2);
    }
    else
    {
        string periodo = functionToGraph.substr(0, functionToGraph.find("*"));
        period = stod(periodo) * (PI / 2);
    }
    if (functionToGraph.substr((functionToGraph.find("(") + 1), 1) == "x")
    {
        amplitude = 1;
    }
    else
    {
        string amplitud = functionToGraph.substr((functionToGraph.find("(") + 1), 1);
        amplitude = stod(amplitud);
    }
    string tipo = functionToGraph.substr((functionToGraph.find("*") + 1), 3);
    intervalos = PI / 20;
    type = tipo;
}

Function::~Function() {}

void Function::graphic()
{
    for (int i = 0; i < 4; i++)
    {
        for (int espacios = 0; espacios < 20; espacios++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }
    for (int i = 0; i <= 40; i++)
    {
        if (i == 20)
        {
            cout << "|";
        }
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int espacios = 0; espacios < 20; espacios++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }
}

double Function::getPeriod()
{
    return period;
}

double Function::getAmplitude()
{
    return amplitude;
}

double Function::getIntervalos()
{
    return intervalos;
}

string Function::getType()
{
    return type;
}

void Function::points()
{

    //int y = getAmplitude() * 10;
    //int x = getIntervalos();
    int max = getAmplitude() * 10;
    if (getType() == "sen" || getType() == "Sen")
    {
        for (double y = (getAmplitude() * 10); y >= 0; y--)
        {
            //cout << sin(y) << endl;
            if (sin(y) == 0)
            {
                cout << "#";
                for (double x = 0.0; x <= (getIntervalos() * 20); x = x + getIntervalos())
                {
                    cout << "-";
                    if (x == (getIntervalos() * 20))
                    {
                        cout << "-" << endl;
                    }
                }
            }
            else if (sin(y) == 1)
            {
                cout << "#" << endl;
            }
            else
                cout << "|";

            for (double x = 1.0; x <= y; x++)
            {
                if (x == y)
                {
                    if (y == max - 1)
                    {
                        cout << "##"; //<< endl;;
                    }
                    if (y == max)
                    {
                        cout << endl;
                    }
                    else if (y != max - 1)
                    {
                        cout << "#"; // << endl;;
                    }
                }else cout << " ";
                cout << "x =" << x <<endl;
               /* for(double espacios = 0.0;  espacios<= x; espacios++){
                if(espacios == x){
                    cout << endl;
                }
                 cout << "i";
                }
                */
            }
        }
    }
}

    /*

1-2 (##) 1 (##)(##)^(##)(##) 1-2-3 (##) 1-2-3 (##)(##)v(##)(##)(##) 1-2-3-4-5-6 (##)(##)(##)^(##)(##) 1-2-3 (##) 1-2-3 (##)(##)v(##)(##) 1 (##) 1
    
    ###                   ###
   #   #                 #  
  #     #               #
 #       #             #
 ---------#-----------#-------------
           #         #
            #       #
             #     #
               ###
          
*/
