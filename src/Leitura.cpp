#include <iostream>
#include <fstream>
#include "Leitura.h"

using namespace std;

int lerDado(ifstream& arq){

    int dado;
    arq >> dado;
    return dado;
}

void lerPesos(ifstream& arq, int pesos[], int n){
    
    int i = 0;

    while(i < n){
        arq >> pesos[i];
        i++;
    }
    
}
