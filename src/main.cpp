#include <iostream>
#include <fstream>
#include "Metodos.h"
#include "Leitura.h"
#include "Processamento.h"

using namespace std;

struct resposta{
    int valor[3];
    float mediaTempo[3];
};
typedef struct resposta Resposta;

int main (){

    string arqs[] = {"Waescher_TEST0058.txt","Waescher_TEST0014.txt",
    "Waescher_TEST0082.txt", "Waescher_TEST0030.txt","Waescher_TEST0005.txt"};
    
    Resposta resp[9] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};

    int i, j, x, vezes = 50;
    int valor[3], valorEficaz[9] = {20,23,24,27,28};
    float tempo[3];

    for(i=0; i < vezes; i++){
        for(j=0; j<5; j++){

            string entrada = "binpacking-instancias/input/" + arqs[j];
            executar(entrada,valor,tempo);

            for(x=0; x<3; x++){
                resp[j].mediaTempo[x]   += (tempo[x]*1000/vezes);
                resp[j].valor[x]        = valor[x];
            }

        }
    }

    for(i=0; i<5; i++){
        cout << arqs[i]<< "         Solução Ótima:" << valorEficaz[i] <<endl;
        for(j=0; j<3; j++){
            printf("tempo: %.3f ms --- Valor Total: %d --- Relação: %f\n", 
            (resp[i].mediaTempo[j]), resp[i].valor[j], ((float)resp[i].valor[j]/valorEficaz[i]));
        }
        cout << endl;
    }

    return 0;
}