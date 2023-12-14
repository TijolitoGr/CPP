# include <iostream>
# define MAX 10
using namespace std;

/* 47. Escreve um algoritmo que leia um vetor com 10 posições de números inteiros e verifique 
se um determinado valor, também inserido pelo utilizador se está no vetor. Caso o elemento não 
esteja no vetor, apresente uma mensagem informar que não está. */

int main() {
    
    int vec[MAX] = {10,20,30,40,50,60,70,80,90,100};
    int var = 1, input;
    
    while (var==1) {
        
        cout << "Insira um  Numero (1-100) e (0-Parar): ";
        cin >> input;
        
        if (input == 0) {
        var = 0;
        }
        
        for (int i = 0; i <= 10; i++) {
            if (vec[i] == input) {
                cout << vec[i] << ": Incluido\n";
            } else {
                cout << vec[i] << ": Nao Incluido\n";
            }
        }
    }
    
    return 0;
}
