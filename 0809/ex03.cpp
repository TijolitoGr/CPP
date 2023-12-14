#include <iostream>
using namespace std;

// 3. Escreve um algoritmo que calcule o IMC de uma pessoa 
// (IMC é o peso divido pelo dobro da altura).

int main() {

    float peso,altura,imc;

    cout << "Insira o seu Peso: \n";
    cin >> peso;
    cout << "Insira a sua altura: \n";
    cin >> altura;

    altura = altura * 2;
    imc = peso / altura;
    
    cout << "O IMC e de: " << imc;
    return 0;

}
