# include <iostream>
using namespace std;

/* 42. Ler um valor e escrever a mensagem O número é maior que 10! 
se o valor lido for maior que 10, caso contrário escrever O número é menor que 10!*/

int main() {
    
    int input, var = 1;
    
    while (var==1) {
        
        cout << "Insira um numero entre maior que 1 (0-Parar): ";
        cin >> input;
        
        if (input==0) {
        var = 0;
        } else if (input >= 1 && input <= 9) {
        cout << "O numero e menor que 10!\n";
        } else if (input >= 10) {
        cout << "O numero e maior que 10!\n";
        }
    }
    
    return 0;
}
