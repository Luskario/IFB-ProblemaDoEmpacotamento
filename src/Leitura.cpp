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

int lerSolucao(string path, string arquivo){
    char delimitador = ',';
    ifstream arq(path);

    string dado;
    int valor = 0;
    if(!arq.is_open()){
        cout <<"não aberto";
    }

    while(getline(arq, dado, delimitador)){
        cout << dado << endl;
        if(dado == arquivo){
            cout << "achado";
        }
    }

    return valor;

}