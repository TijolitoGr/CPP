# include <iostream>
# define MAX 10
using namespace std;

/* 58. Faz um programa para ler a nota de 10 alunos e guarde num vetor. Calcule e imprima a média em geral. */

int main() {

    int vec[MAX] = {}, media = 0;

    cout << "Insira as 10 Notas: \n";
    for (int i = 0; i <= 10; i++) {
        cin >> vec[i];
        media = media + vec[i];
    }
    
    media = media / MAX;
    cout << "Media das Notas: " << media;

    return 0;
}
