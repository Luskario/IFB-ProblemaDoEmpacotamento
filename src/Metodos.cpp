#include <iostream>
#include <string>
#include <vector>

using namespace std;

int firstFit(int itens[], int capacidade, int qtd){
    int aux, i, j;
    std::vector<int> caixas;
    caixas.push_back(capacidade);

    for(i=0; i<qtd; i++){
        aux = 0;

        for(j=0; j<caixas.size(); j++){
            if(caixas[j] - itens[i] >= 0){
                caixas[j] -= itens[i];
                aux = 1;
                break;
            }
        }
        if(!aux){
            caixas.push_back(capacidade - itens[i]);
        }
    }

    return caixas.size();
}

int nextFit(int itens[], int capacidade, int qtd){
    int i, aux = 1;
    int caixa = capacidade;

    for(i=0; i<qtd; i++){
        if(caixa - itens[i] >= 0){
            caixa -= itens[i];

        } else {
            caixa = capacidade - itens[i];
            aux++;
        }
    }
    
    return aux;
}

int bestFit(int itens[], int capacidade, int qtd){
    int aux, i, j, menor, indice;
    std::vector<int> caixas;
    caixas.push_back(capacidade);

    for(i=0; i<qtd;i++){
        aux = 0;
        menor = capacidade;
        for(j=0; j<caixas.size(); j++){
            if(caixas[j]- itens[i] < menor && caixas[j]- itens[i]>=0){
                aux = 1;
                indice = j;
            }
        }
        if(aux){
            caixas[indice] -= itens[i];
        } else {
            caixas.push_back(capacidade - itens[i]);
        }
    }
    
    return caixas.size();

}