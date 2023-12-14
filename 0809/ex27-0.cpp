#include <iostream>
using namespace std;

// 27. Escreve um algoritmo que recebe 10 valores, um de cada vez, 
// e que conte quantos deles estão no intervalo [10,20] 
// e quantos estão fora do intervalo.

int main() {

    int num, in = 0, out = 0, vezes = 0;
    
    cout << "Insira 10 numeros entre 0-30\n";

    do {

    cin >> num;
    vezes++;

    if (num >= 10 && num <= 20) {

        in++;

        } else {

            out++;
    
        }
    }

    while (vezes <= 10);

    cout << "#################################\n";
    cout << "Dentro do Intervalo: " << in << endl;
    cout << "Fora do Intervalo: " << out << endl;
    cout << "#################################\n";

    return 0;
}