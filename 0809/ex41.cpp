# include <iostream>
using namespace std;

/* 41. Faz um algoritmo que permita ao utilizador inserir a idade de quantas 
pessoas ele desejar. Após isso o algoritmo deve informar a soma das pessoas 
maiores de idade e a média de idade das pessoas maiores de idade. */

int main() {
    
    int quanti = 0, maior = 0, media = 0;
    int input;
    
    cout << "Quantas idades deseja inserir: \n";
    cin >> quanti;
    
    for (int i = 1; i <= quanti; i++) {
        
        cout << "Insira a (" << i << "*) idade: \n";
        cin >> input;
        
        if (input >= 18) {
        maior = maior + 1;
        media = media + input;
        
        }         
    }
    
    cout << "Quantidade de Idades: " << quanti << endl;
    cout << "Quantidade de Maiores: " << maior << endl;
    cout << "Soma dos Maiores: " << media << endl;
    media = media / quanti;
    cout << "Media dos Maiores: " << media << endl;
    
    return 0;
}
