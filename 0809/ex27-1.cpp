#include <iostream>
#define MAX 10
using namespace std;

// 27.1 Escreve um algoritmo que recebe um vetor de 10 numeros, um de cada vez, 
// e que conte quantos deles estão no intervalo [10,20] 
// e quantos estão fora do intervalo. [VETORES]

int main() {

    int vec[MAX], in = 0, out = 0, input;

    for (int i = 0; i < 10; i++) {
        cout << "Insira 10 numeros entre 0-30\n";
        cin >> input;
        vec[i] = input;

        if (vec[i] >= 10 && vec[i] <= 20) {
            in = in + 1;
        } else {
            out = out + 1;
        }
    }

    cout << "#################################\n";
    cout << "Dentro do Intervalo: " << in << endl;
    cout << "Fora do Intervalo: " << out << endl;
    cout << "#################################\n";

    return 0;

}