# include <iostream>
# define MAX 10
using namespace std;

/* 63. Escreva um programa que leia números inteiros no intervalo [0,50] e os guarde em um vetor com 10 posições. 
Preencha um segundo vetor com os números ímpares do primeiro vetor. Imprima os dois vetores. */

int main() {

    int vetorOriginal[MAX];
    int vetorImpares[MAX];
    int contadorImpares = 0;

    cout << "Digite 10 numeros inteiros no intervalo [0,50]:\n";
    for (int i = 0; i < MAX; ++i) {
        do {
            cout << "Digite o numero " << i + 1 << ": ";
            cin >> vetorOriginal[i];
        } while (vetorOriginal[i] < 0 || vetorOriginal[i] > 50);
    }

    for (int i = 0; i < MAX; ++i) {
        if (vetorOriginal[i] % 2 != 0) {
            vetorImpares[contadorImpares] = vetorOriginal[i];
            contadorImpares++;
        }
    }

    cout << "\nVetor Original:\n";
    for (int i = 0; i < MAX; ++i) {
        cout << vetorOriginal[i] << " ";
    }

    cout << "\n\nVetor de Impares:\n";
    for (int i = 0; i < MAX; ++i) {
        cout << vetorImpares[i] << " ";
    }

    return 0;
}
