#include <iostream>

using namespace std;

void sumaMaxima(){

    int convinaciones = 0;
    for(int x=0; x<=20; x++)
        for(int y=0; y<=20; y++){
            for(int z=0; z<=20; z++){
                if((5*x+10*y+25*z)==300){
                    convinaciones = convinaciones +1;
                }
            }
        }
    }cout << convinaciones;

}

int main(){
    sumaMaxima();
}