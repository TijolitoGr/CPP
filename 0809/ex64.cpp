# include <iostream>
# define MAX 10
using namespace std;

/* 64. Escreva um programa que leia um vetor de 10 posições e crie um segundo vetor substituindo os valores negativos por 1. */

int main() {

    int vec[MAX] = {}, vector[MAX] = {};
    
    for (int i = 0; i <= MAX; i++) {
        cout << "Insira um Numero Inteiro: ";
        cin >> vec[i];
    }

    for (int i = 0; i <= MAX; i++) {
        if (vec[i] <= -1) {
            vector[i] = 1;   
        } else if (vec[i] >= 0) {
            vector[i] = vec[i];
        }
    }
    
    cout << "Resultado: ";
    for (int i = 0; i <= MAX; i++) {
        cout << vector[i] << " | ";
    }
    return 0;
}
