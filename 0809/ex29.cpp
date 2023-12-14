#include <iostream>
using namespace std;

// 29. Escreve um algoritmo que escreva os números ímpares entre 100 e 200.

int main() {

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 1) {
            cout << i << " | ";
        }
    }    

    return 0;   
}