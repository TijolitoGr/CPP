#include <iostream>
using namespace std;
// 12. Escreve um algoritmo que calcule o resto da divisão por 2 de um número inserido pelo utilizador.

int main() {

    int numero;

    cout << "Insira um numero: \n";
    cin >> numero;

    numero = numero % 2;
    cout << "O resto da divisao por 2 desse numero e de: " << numero;

    return 0;   
}
