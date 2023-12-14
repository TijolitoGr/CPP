#include <iostream> 
using namespace std;

// 9. Escreve um algoritmo que receba de entrada um número inteiro 
// e mostre o seu antecessor.

int main() {

    float numero;

    cout << "Insira um numero: \n";
    cin >> numero;
    
    numero = numero - 1;
    
    cout << "O Antecessdor desse numero e: " << numero;
    return 0;   

}
