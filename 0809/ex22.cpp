#include <iostream>
using namespace std;

// 22. Faz um algoritmo que receba uma senha e mostre “Correta!” se o valor corresponder a “12345”. 
// Caso contrário, peça a senha novamente. (do ... while).

int main() {

   int senha;

    do {

        cout << "Bem-Vindo Martim, Insira a sua Senha:";
        cin >> senha;

    }

    while (senha != 123); 
        cout << "\nBem-Vindo de Volta Martim,\n\n- Tem 43 emails por ler na Caixa de Entrada\n- Daqui a 25 minutos tem uma Reuniao de C++\n- Nao te esquecas de jogar RDR2\n\n";
    
    return 0;   
}