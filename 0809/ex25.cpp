#include <iostream>
using namespace std;

// 25. Faz um algoritmo que receba números inteiros entre 0 e 100 pelo teclado. 
// A condição de parar deve ser 0 (zero). No final mostre:
//
// - Maior Número
// - Menor Número
// - Média dos Números

int main() {

    int num, maior = 0, menor = 100, media = 0, vezes = 0;

    cout << "Insira 10 numeros entre 0-100\n";

    do {

    cin >> num;

    if (num >= 0 && num <= 100) {

    media = media + num;
    vezes = vezes + 1;

        if (num > maior) {
        maior = num;

        } else if (num < menor) {
        menor = num;
        }
    }

    }

    while (vezes <= 10);

    media = media / vezes;
    
    cout << "##########################\n";
    cout << "O maior numero de eles todos e: " << maior << endl;
    cout << "O menor numero de eles todos e: " << menor << endl;
    cout << "A media de todos os numeros e de: " << media << endl;
    cout << "##########################\n";

    return 0;   
}