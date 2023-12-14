#include <iostream> 
using namespace std;

// 10. Escreve um algoritmo que receba de entrada um número inteiro e 
// a mostre a metade deste número.
int main() {

    float numero;

    cout << "Insira um numero: \n";
    cin >> numero;
    
    numero = numero / 2;
    
    cout << "A metade desse numero e: " << numero;
    return 0;   

}
