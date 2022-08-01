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

    string arqs[9];
    
    Resposta resp[9] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};

    int i, j, x, vezes = 1;
    int valor[3], valorEficaz[9];
    float tempo[3];

    for(i=0; i < vezes; i++){
        for(j=0; j<9; j++){

            string entrada = "binpacking-instancias/input/" + arqs[j];
            executar(entrada,valor,tempo);

            for(x=0; x<3; x++){
                resp[j].mediaTempo[x]   += (tempo[x]*1000/vezes);
                resp[j].valor[x]        = valor[x];
            }

        }
    }

    for(i=0; i<9; i++){
        printf("\n %s \n\n", arqs[i]);
        for(j=0; j<3; j++){
            printf("tempo: %.2f ms ----- Valor Total: %d ", 
            (resp[i].mediaTempo[j]), resp[i].valor[j],(resp[i].valor[j]/valorEficaz[i]));
        }
    }

    return 0;
}