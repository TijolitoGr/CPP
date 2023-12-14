# include <iostream>
# define MAX 6
using namespace std;

/* 57. Escreve um programa que lê 6 valores inteiros e, em seguida, mostre os valores lidos pela ordem inversa.*/

int main() {

    int vetor[MAX] = {};

    cout << "Insira os 6 valores do vetor:\n";
    for (int i = 0; i <= 5; i++) {
        cin >> vetor[i];
    }
 
    for (int i = 6; i >= 0; i--) {
        cout << vetor[i] << " | \n";
    }

    return 0;
}
