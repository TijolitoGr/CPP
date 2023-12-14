# include <iostream>
using namespace std;

/* 44. Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 
valores lidos (incluindo os valores lidos na soma). Considere que o segundo 
valor lido será sempre maior que o primeiro valor lido. */

int main() {
    
    int x, y;
    int intervalo = 0, soma = 0;
    
    cout << "Insira o valor de X: " << endl;
    cin >> x;
    cout << "Insira o valor de Y: " << endl;
    cin >> y;
    
    while (y < x) {
        cout << "ERRO: Insira o valor de Y (Y>X): " << endl;
        cin >> y;
    }
    
    if (y > x) {
        soma = y + x;
        intervalo = y - x;
    }
    
    cout << "A soma desses numero e de: " << soma << endl;
    cout << "O intervalo desses numeros e de " << intervalo << endl;
    
    return 0;
}
