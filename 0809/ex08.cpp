#include <iostream> 
using namespace std;

// 8. Escreve um algoritmo que receba de entrada um número inteiro 
// e mostre o seu sucessor.

int main() {

    float numero;

    cout << "Insira um numero: \n";
    cin >> numero;
    
    numero = numero + 1;
    
    cout << "O Sucessor desse numero e: " << numero;
    return 0;   

}
