# include <iostream>
# define MAX 6
using namespace std;

/* 49. Faz um programa que leia de seis números inteiros, calcule e mostre:
 - A quantidade de números pares
 - Quais os números pares
 - A Quantidade de números ímpares
 - Quais os números ímpares */

int main() {
    
    int vec[MAX] = {};
    int input, parq = 0, impq = 0; 
    
    for (int i = 1; i <= 6; i++) {
            
        cout << "Insira um numero para o Vetor na posicao (" << i << "): ";
        cin >> input;
        vec[i] = input;
        
        if (input % 2 == 0) {
            parq = parq + 1;
        } else {
            impq = impq + 1;
          
        }
      
    }
    
    cout << "Quantidade de Numeros Pares: " << parq << endl;
    cout << "Quantidade de Numeros Impares: " << impq << endl;
    
   
    cout << "Numeros Pares: ";
    for (int i = 1; i <= 6; i++) {
    
        if (vec[i] % 2 == 0) {
            cout << vec[i] << " | ";
        }
    
    }
    
    cout << "\nNumeros Impares: ";
    for (int i = 1; i <= 6; i++) {
    
        if (vec[i] % 2 == 1) {
            cout << vec[i] << " | ";
        }
    
    }
    
    return 0;
}
