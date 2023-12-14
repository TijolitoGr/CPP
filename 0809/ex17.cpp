#include <iostream>
using namespace std;

// 17. Escreve um algoritmo que leia o plano de trabalho e o salário atual de um 
// funcionário que calcule e imprima o seu novo salário. Use o comando switch.

int main() {

    float salario;
    char plano;

    cout << "Insira um Salario: \n";
    cin >> salario;
    cout << "Qual dos planos deseja usar: (A,B,C)? \n";
    cin >> plano;

    switch (plano) {
        case 'A':   
            salario = salario + (salario * 0.1);
            cout << "Usando o Plano A ira obter um aumento de 10 porcento. O seu novo Salario e de: " << salario;
            break;
        case 'B':
            salario = salario + (salario * 0.15);
            cout << "Usando o Plano A ira obter um aumento de 15 porcento. O seu novo Salario e de: " << salario;
            break;
        case 'C':
            salario = salario + (salario * 0.2);
            cout << "Usando o Plano A ira obter um aumento de 20 porcento. O seu novo Salario e de: " << salario;
            break;
    }

    return 0;   
}
