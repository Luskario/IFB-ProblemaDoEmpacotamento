#include <iostream>
#include "Metodos.h"

using namespace std;

int main (){

    int teste[5] = {2, 4 , 1, 2, 1};
    cout << firstFit(teste, 5, 5) <<endl;
    cout << nextFit(teste, 5, 5) <<endl;
    return 0;
}