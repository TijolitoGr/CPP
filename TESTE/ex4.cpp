#include <iostream> 
using namespace std;
#define MAX 10

// TESTE
// 4. [2] Leia um vetor de 10 posicoes e verifique se existem valores iguais e os escreva.

int main() {

    int vetor[MAX] = {};
    bool equal = false;

    cout << "Insira 10 valores para o Vetor: ";
    for (int i = 0; i < MAX; i++) {
        cin >> vetor[i];
    }

    cout << "Valores iguais encontrados:\n";
    for (int i = 0; i <= MAX; i++) {
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