# include <iostream>
# define MAX 6 
using namespace std;

/* 39. Crie um programa para que retorne o somatório de todos os números entre 1 
e um valor fornecido pelo utilizador. Por exemplo, se o utilizador fornecer o número 4, 
o computador deverá calcular o somatório 1 + 2 + 3 + 4 = 10. */

int main() {

    int final, result;
    
    cout << "Insira o valor Final: \n";
    cin >> final;
    
    for (int i = 1; i <= final; i++) {
        result = result + i;
    }
    
    cout << "A soma entre esses dois numeros e de: " << result << endl;

    return 0;
}
