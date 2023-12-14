#include <iostream>
using namespace std;

// 14. Escreve um algoritmo que identifique se o número é positivo ou negativo.

int main() {

    int numero;

    cout << "Insira um numero: \n";
    cin >> numero;

    if (numero <= -1) {
        cout << "O Numero inserido e Negativo";

    } else 
        { if (numero >= 0) {
            cout << "O Numero inserido e Positivo";
        }
    }

    return 0;   
}
