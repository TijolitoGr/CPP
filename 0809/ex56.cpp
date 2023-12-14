# include <iostream>
# define MAX 16
using namespace std;

/* 56. Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos. Escreve no final o vetor obtido..*/

int main() {

    int vetor[MAX];

    cout << "Insira os 16 valores do vetor:\n";
    for (int i = 0; i < 16; i++) {
        cin >> vetor[i];
    }
 
    for (int i = 0; i < 8; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[i + 8];
        vetor[i + 8] = temp;
    }

    cout << "Vetor resultante:\n";
    for (int i = 0; i < 16; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
