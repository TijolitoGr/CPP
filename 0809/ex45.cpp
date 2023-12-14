# include <iostream>
using namespace std;

/* 45. O mesmo exercício anterior, mas agora, considere que o segundo valor lido
poderá ser maior ou menor que o primeiro valor lido, ou seja, deve-se testá-los. */

int main() {
    
    int x, y;
    int intervalo = 0, soma = 0;
    
    cout << "Insira o valor de X: " << endl;
    cin >> x;
    cout << "Insira o valor de Y: " << endl;
    cin >> y;
    
    if (y > x) {
        soma = y + x;
        intervalo = y - x;
    }
    
    cout << "A soma desses numero e de: " << soma << endl;
    cout << "O intervalo desses numeros e de " << intervalo << endl;
    
    return 0;
}
