#include <iostream>
using namespace std;

// 24. Faz um algoritmo que receba um valor maior que 10. 
// Escrever todos os números pares entre 1 e o valor recebido.

int main() {

    int num, par = 0;

    cout << "Insira um numero maior que 10: ";
    cin >> num;

    if (num < 10) {

        cout << "[ERRO]:O numero inserido nao e maior que 10";

    }
    
    for (int i = 0; i <= num; i++) {

        if (par == i % 2) {

            cout << i << " | ";

        }
    }

    return 0;   
}