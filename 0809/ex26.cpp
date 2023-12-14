#include <iostream>
using namespace std;

// 26. Faz um algoritmo que gere números de 1000 a 1999 e 
// escreva aqueles que dividindo por 11 dão resto igual a 5.

int main() {

    int impar = 0;

    for (int i = 1000; i < 1999; i++) {
        if (impar == i % 11) {
            cout << i << " | ";
        }
    }

    return 0;   
}