# include <iostream>
# define MAX 20
using namespace std;

/* 62. Leia um vetor com 20 números inteiros. 
Escreva os elementos do vetor eliminando elementos repetidos. */

int main() {
    
    int vetor[MAX] = {};
    bool equal = false;
    
    cout << "Insira 20 valores para o vetor:\n";
    for (int i = 0; i <= MAX; i++) {
        cin >> vetor[i];
    }
    
    cout << "Valores iguais encontrados:\n";
    for (int i = 0; i <= MAX - 1; i++) {
        for (int x = i + 1; x < MAX; x++) {
            if (vetor[i] == vetor[x]) {
                cout << vetor[i] << " ";
                equal = true;
                vetor[i] = 0;
            }
        }
    }

    if (equal == false) {
        cout << "Nenhum valor igual encontrado.\n";
    }
    
    return 0;
}
