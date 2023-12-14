# include <iostream>
# define MAX 10
using namespace std;

/* 59. Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva. */

int main() {

    int vetor[MAX] = {};
    bool equal = false;
    
    cout << "Insira 10 valores para o vetor:\n";
    for (int i = 0; i <= MAX; i++) {
        cin >> vetor[i];
    }
    
    cout << "Valores iguais encontrados:\n";
    for (int i = 0; i <= MAX - 1; i++) {
        for (int x = i + 1; x < MAX; x++) {
            if (vetor[i] == vetor[x]) {
                cout << vetor[i] << " ";
                equal = true;
            }
        }
    }

    if (equal == false) {
        cout << "Nenhum valor igual encontrado.\n";
    }

    

    return 0;
}
