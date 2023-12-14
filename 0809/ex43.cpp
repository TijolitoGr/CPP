# include <iostream>
using namespace std;

/* 43. Escreve um algoritmo para ler 10 números. Todos os números lidos com 
valor inferior a 40 devem ser somados. Escreve o valor final da soma efetuada. */

int main() {
    
    int input, soma = 0;
    
    for (int i = 0; i <= 10; i++) {
        cout << "Insira um numero entre 1-100: ";
        cin >> input;
        
        if (input >= 40) {
            soma = soma + input;
        }
    }
    
    cout << "A soma de todos os valores acima de 40 e de: " << soma;
    
    return 0;
}
