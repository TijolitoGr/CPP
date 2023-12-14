# include <iostream>
#define MAX 10
using namespace std;

/* 32. Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma 
que a variável A passe a possuir o valor da variável B e a variável B passe a possuir 
o valor da variável A. Apresentar os valores após a efetivação do processamento da troca.
*/

int main(){

    int a, b, cache;

    cout << "Insira o Valor de A: ";
    cin >> a;

    cout << "Insira o Valor de B: ";
    cin >> b;

    cout << "######################\n";
    cout << "Valor de A e: " << a << endl;
    cout << "Valor de B e: " << b << endl;
    
    cache = a;
    a = b;
    b = cache;

    cout << "Troca: " << endl;

    cout << "Valor de A e: " << a << endl;
    cout << "Valor de B e: " << b << endl;
    cout << "######################";

    return 0;
}