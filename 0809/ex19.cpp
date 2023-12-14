#include <iostream>
using namespace std;

// 19. Escreve um algoritmo que leia o código do item pedido,
// a quantidade e calcule o valor a ser pago por aquele lanche. 
// Considere que a cada execução somente será calculada um item. 
// Use o comando switch.

int main() {

    int numero;

    cout << "Insira um codigo (100-105): \n";
    cin >> numero;

    switch (numero) {
        case 100:   
            cout << "Especificacao: Cachorro Quente | Codigo 100 | Preco: 1.20";
            break;
        case 101:
            cout << "Especificacao: Bauru Simples | Codigo 101 | Preco: 1.30";
            break;
        case 102:
            cout << "Especificacao: Bauru com Ovo | Codigo 102 | Preco: 1.50";
            break;
        case 103:
            cout << "Especificacao: Hambúrger | Codigo 103 | Preco: 1.20";
            break;
        case 104:
            cout << "Especificacao: Cheeseburger | Codigo 104 | Preco: 1.30";
            break;
        case 105:
            cout << "Especificacao: Refrigerante | Codigo 105 | Preco: 1.00";
            break;
    }
    
    return 0;   
}
