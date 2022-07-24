#include <iostream>
#include <fstream>
#include "Metodos.h"
#include "Leitura.h"
#include "Processamento.h"

using namespace std;

int main (){

    ifstream arq("binpacking-instancias/input/Waescher_TEST0022.txt");
    

    executar("");

    int teste[5] = {2, 4 , 1, 2, 1};
    //cout << firstFit(teste, 5, 5) <<endl;
    //cout << nextFit(teste, 5, 5) <<endl;
    //cout << bestFit(teste, 5, 5) <<endl;
    return 0;
}