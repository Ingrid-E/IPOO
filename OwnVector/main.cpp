#include <iostream>
#include <string>
using namespace std;
#include "MyVector.h"

/**
 * @brief Creating a vector using MyVector library.
 * @author Ingrid Echeverri Montoya (ingrid.echeverri@correounivalle.edu.co)
 * @return int 
 */
int main()
{

    MyVector vector;

    string make;
    cin >> make;
    while (make != "asc" || make != "desc")
    {
        if (make == "asc" || make == "desc")
        {
            break;
        }
        vector.append(stod(make));
        cin >> make;
    }

    vector.sort(make);

    for (int i = 0; i < vector.size(); ++i)
    {
        cout << vector.get(i) << endl;
    }
}