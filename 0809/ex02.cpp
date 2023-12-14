#include <iostream> 
using namespace std;

// 2. Escreve um algoritmo que calcule e mostre quanto o trabalhador deverá 
// receber no fim do mês de acordo com a quantidade de horas trabalhadas e  
// o valor que é pago por cada hora.

int main() {

    int w,pph,payment;
    cout << "Insira a quantidade de Horas Trabalhadas: \n";
    cin >> w;
    cout << "Insira o quanto se paga por Hora: \n";
    cin >> pph;

    payment = w * pph;

    cout << "O Pagamento e de: " << payment << " euros.";
    return 0;

}
