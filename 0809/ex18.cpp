#include <iostream>
using namespace std;

// 18. Escreve um algoritmo que leia um número entre 0 e 10, e escreva este número por extenso.
// Use o comando switch.
int main() {

    int numero;

    cout << "Insira um numero (1-10): \n";
    cin >> numero;

    switch (numero) {
        case 1:   
            cout << "UM";
            break;
        case 2:
            cout << "DOIS";
            break;
        case 3:
            cout << "TRES";
            break;
        case 4:
            cout << "QUATRO";
            break;
        case 5:
            cout << "CINCO";
            break;
        case 6:
            cout << "SEIS";
            break;
        case 7:
            cout << "SETE";
            break;
        case 8:
            cout << "OITO";
            break;
        case 9:
            cout << "NOVE";
            break;
        case 10:
            cout << "DEZ";
            break;
    }

    return 0;   
}
