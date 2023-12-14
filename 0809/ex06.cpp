#include <iostream> 
using namespace std;

// 6. Escreve um algoritmo que calcule e mostre o valor da gorjeta 
// a ser paga ao garçon (10% valor da conta).

int main() {

    float pagamento,taxa,result;

    cout << "Insira o Pagamento: \n";
    cin >> pagamento;
    cout << "Insira a percentagem da Gorjeta: \n";
    cin >> taxa;

    taxa = taxa / 100;
    result = pagamento + (pagamento*taxa);
    
    cout << "O Pagamento sera de: " << result;
    return 0;   

}
