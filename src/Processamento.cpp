#include <iostream>
#include <fstream>
#include "Processamento.h"
#include "Metodos.h"
#include "Leitura.h"
#include <time.h>

using namespace std;

void executar(string Entrada, int resp[], float tempo[]){

    ifstream arq(Entrada);
    
    int qtd = lerDado(arq), capacidade = lerDado(arq);
    int itens[qtd];
    clock_t timer;

    lerPesos(arq, itens, qtd);

    timer = clock();
    resp[0] = firstFit(itens, capacidade, qtd);
    timer = clock() - timer;
    tempo[0] = ((float)timer/CLOCKS_PER_SEC);

    timer = clock();
    resp[1] = nextFit(itens, capacidade, qtd);
    timer = clock() - timer;
    tempo[1] = ((float)timer/CLOCKS_PER_SEC);

    timer = clock();
    resp[2] = bestFit(itens, capacidade, qtd);
    timer = clock() - timer;
    tempo[2] = ((float)timer/CLOCKS_PER_SEC);

}