#include <iostream>
using namespace std;

// 23. Faz um algoritmo que receba um número inteiro, calcule e imprime a 
// tabuada desse número utilizando uma estrutura de repetição.

int main() {

   int numI, numF, numM;

    cout << "Insira o numero para ser Multiplicado: \n";
    cin >> numI;

    numM = numI;

    cout << "Insira o limite da Multiplicacao: \n";
    cin >> numF;
    
    for (int i = 0; numI < numF; i++) {
        numI = numM * i;
        cout << numI << " | ";
    
    }
    
    return 0;   
}