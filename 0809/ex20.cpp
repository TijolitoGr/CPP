#include <iostream>
using namespace std;

// 20. Faz um algoritmo que receba um número inicial e um número final e 
// depois mostre todos os números que compõe o intervalo deles. (for).

int main() {

    int numeroI, numeroF;

    cout << "Insira um numero Inicial: \n";
    cin >> numeroI;

    cout << "Insira um numero Final: \n";
    cin >> numeroF;
    
    for (int i = numeroI; i <= numeroF; i++) {
        cout << i << endl;
    
    }

    return 0;   
}
