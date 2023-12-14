#include <iostream>
using namespace std;

// 11. Escreve um algoritmo para calcular a média de um aluno a partir de duas notas. 
// O programa deve mostra a média e também uma mensagem informando se o aluno foi aprovado ou reprovado. 
// Sabe-se que o aluno é reprovado se a sua média for inferior a 10.

int main() {

    float nota1,nota2,media;

    cout << "Insira a Primeira Nota: \n";
    cin >> nota1;
    cout << "Insira a Segunda Nota: \n";
    cin >> nota2;

    media = (nota1 + nota2)/2;
    cout << "A media e de " << media << " sendo ela uma ";

    if (media >= 10) {
        cout << "media Positiva";

    } else 
        { if (media < 10) {
            cout << "media Negativa";
        }
    }

    return 0;   
}
