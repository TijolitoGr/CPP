# include <iostream>
# define MAX 6
using namespace std;

/* 48. Faz um programa que possua um vetor designado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
 - Atribua os seguintes valores a e esse vetor: 1, 0, 5, -2, -5, 7.
 - Armazene em uma variável inteira a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre. 
 - Mostre cada valor do vetor A, um em cada linha. */

int main() {
    
    int vec[MAX] = {1,0,5,-2,-5,7};
    int soma;
    
    soma = vec[0] + vec[1] + vec[5];
    cout << "A soma dos vetores na posicao (0,1,5) e de: " << soma << endl;
    
    for (int i = 0; i <= 5; i++) {
        
        cout << "Valor do Vetor (" << i << ") e de: " << vec[i] << endl;
            
    }    
    
    return 0;
}
