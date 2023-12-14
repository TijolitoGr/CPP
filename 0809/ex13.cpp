#include <iostream>
using namespace std;

// 13. Escreve um algoritmo que identifique se o número é par ou ímpar.

int main() {

    int numero;

    cout << "Insira um numero: \n";
    cin >> numero;

    numero = numero % 2;
    cout << numero;

    if (numero == 1) {
        cout << "O Numero inserido e Impar";

    } else 
        { if (numero == 0) {
            cout << "O Numero inserido e Par";
        }
    }

    return 0;   
}
