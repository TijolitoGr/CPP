#include <iostream>
using namespace std;

// 28. Escreve um algoritmo que leia a altura de 15 pessoas e mostre:
// - A Menor Altura do Grupo
// - A Maior Altura do Grupo

int main() {

    int menor = 9999, maior = -9999, input;

    for (int i = 0; i < 10; i++) {
        cout << "Insira 10 alturas (cm):  ";
        cin >> input;

        if (input > maior) {
            maior = input;

        } else if (input < menor) {
            menor = input;
        }
        
    }

    cout << "#################################\n";
    cout << "Menor Altura: " << menor << endl;
    cout << "Maior Altura: " << maior << endl;
    cout << "#################################\n";

    return 0;

}