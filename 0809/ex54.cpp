# include <iostream>
# define MAX 10
using namespace std;

/* 54. Escreve um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos do mesmo índice, 
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

int main() {

    int first[MAX] = {}, last[MAX] = {}, all[MAX] = {};
    
    for (int i = 1; i <= 10; i++) {
        cout << "\nInsira um numero Inteiro: ";
        cin >> first[i];
        cout << "\nInsira outro numero Inteiro: ";
        cin >> last[i];
        all[i] = first[i] * last[i];
    }
    
    for (int i = 1; i <= 10; i++) {
        cout << all[i] << " | ";
    }

    return 0;
}
