# include <iostream>
# define MAX 5
using namespace std;

/* 60. Faz um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontra o maior e o menor valor. */

int main() {

    int vetor[MAX];

    cout << "Insira 5 valores:\n";
    for (int i = 0; i < MAX; i++) {
        cin >> vetor[i];
    }

    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 1; i < MAX; i++) {
        if (vetor[i] > vetor[posicaoMaior]) {
            posicaoMaior = i;
        } else if (vetor[i] < vetor[posicaoMenor]) {
            posicaoMenor = i;
        }
    }

    cout << "Posicao do maior valor: " << posicaoMaior + 1 << endl;
    cout << "Posicao do menor valor: " << posicaoMenor + 1 << endl;

    return 0;
}
