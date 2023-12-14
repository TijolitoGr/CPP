#include <iostream> 
using namespace std;

// 7. Escreve um algoritmo que calcule o troco a ser pago a um cliente, 
// sabendo o preço total da compra e o valor dado para o pagamento.

int main() {

    float pagamento,custo,troco;

    cout << "Insira o Pagamento: \n";
    cin >> pagamento;
    cout << "Insira o Custo das Compras: \n";
    cin >> custo;

    troco = pagamento - custo;
    
    cout << "O Troco sera de: " << troco;
    return 0;   

}
