#include <iostream>
#include <fstream>
#include "Processamento.h"
#include "Metodos.h"
#include "Leitura.h"

using namespace std;


void executar(string Entrada){

    ifstream arq("binpacking-instancias/input/Waescher_TEST0022.txt");
    
    int qtd = lerDado(arq), capacidade = lerDado(arq);
    int itens[qtd];

    lerPesos(arq, itens, qtd);

    //---------------------------------------------------------------//

    //int vezes, i, j;

    //for(i=0; i<vezes; i++){
    //    for(j=0; j<3; j++){

    //    }
    //}

    //cout << firstFit(itens, capacidade, qtd) << endl;

}