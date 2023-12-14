# include <iostream>
#define MAX 10
using namespace std;

/* 31. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, 
para os quais fornece a quantidade de ração em gramas. A quantidade diária de 
ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o 
peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule 
e mostre quanto restará de ração no saco após cinco dias.
*/

int main(){

    double compra, consumo, resto;

    cout << "Quanta racao(kg) Pedro comprou?: ";
    cin >> compra;

    cout << "Quanta racao(kg) come os gatos por Dia?: ";
    cin >> consumo;

    resto = compra / consumo;

    cout << "##############################" << endl;
    cout << "Dias Restantes: " << resto << " dias.\n";
    cout << "##############################" << endl;
        
    return 0;
}