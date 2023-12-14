# include <iostream>
#define MAX 10
using namespace std;

/* 30. Escreva um algoritmo que recebe 10 valores, um de cada vez, e mostre:
 - Quantos sao pares;
 - Quantos sao impares. */

int main(){

    int input, par = 0, imp = 0;

    for (int i = 0; i <= 10; i++) {
        cout << "Insira um numero (x10):  ";
        cin >> input;

        if (input % 2 == 1) {
            imp = imp + 1;

        } else if (input % 2 == 0) {
            par = par + 1;
        }
    }

    cout << "##############################" << endl;
    cout << "Quantidade de Numeros Pares: " << par << endl;
    cout << "Quantidade de Numeros Impares: " << imp << endl;
    cout << "##############################" << endl;
        
    return 0;
}