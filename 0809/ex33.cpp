# include <iostream>
#define MAX 10
using namespace std;

/* 33. Elaborar um programa que calcule e apresente o valor do volume de uma 
caixa retangular, utilizando a fórmula VOLUME <- COMPRIMENTO x LARGURA x ALTURA.
*/

int main(){

    int com, lar, alt, volume;

    cout << "Insira o Valor do Comprimento: ";
    cin >> com;
    cout << "Insira o Valor da Largura: ";
    cin >> lar;
    cout << "Insira o Valor da Altura: ";
    cin >> alt;

    volume = com * lar * alt;
    cout << "O volume desse Paralelepipedo e de: " << volume << "cm^3";


    return 0;
}