#include <iostream>
using namespace std;

// 16. Escreve um algoritmo que calcule o reajuste do salário de um funcionário, 
// sabendo que o funcionário deverá receber uma atualização de 15%, se o seu 
// salario seja menor ou igual a 525 €, caso contrário, será de 10%.

int main() {

    float numero,antigo;

    cout << "Insira um Salario: \n";
    cin >> numero;

    if (numero <= 525) {
        antigo = numero;
        numero = numero + (numero * 0.15);
        cout << "O salario antigo de: " << antigo << " euros, teve um aumento de 15 porcento e agora e de: " << numero << " euros.";

    } else if (numero >= 526) {
        antigo = numero;
        numero = numero + (numero * 0.1);
        cout << "O salario antigo de: " << antigo << " euros, teve um aumento de 10 porcento e agora e de: " << numero << " euros.";
    }

    return 0;   
}
