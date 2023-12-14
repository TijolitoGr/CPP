#include <iostream>
using namespace std;

// 21. Faz um algoritmo que receba um número e moste a sequência entre 
// o número inserido até 100 (while).

int main() {

    int numeroI, numeroF = 100;

    cout << "Insira um numero de 0-99: \n";
    cin >> numeroI;

    cout << "Insira o numero maximo (Default: 100):";
    cin >> numeroF;

    for (int i = numeroI; i <= numeroF; i++) {
        cout << i << " | ";
    }

    return 0;   
}