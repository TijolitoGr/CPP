# include <iostream>
# define MAX 10
using namespace std;

/* 50. Faz um programa que leia um vetor com dez números inteiros, calcule e mostre 
a quantidade de números negativos e a soma dos números positivos desse vetor.*/

int main() {
    
    int vec[MAX] = {-10,-40,-20,-30,-5,5,30,20,40,10};
    int soma = 0, negq = 0;
    
    for (int i = 1; i <= 10; i++) {
        
        if (vec[i] >= 0) {
        soma = soma + vec[i];
        }
        
        if (vec[i] <= -1) {
        negq = negq + 1;
        }
        
    }
    
    cout << "Soma de Todos os numeros positivos: " << soma << endl;
    cout << "Quantitade de Numeros Negativos: " << negq << endl;
    
    return 0;
}
