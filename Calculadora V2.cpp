#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int var = 1;
    string primeiro, ultimo;
    char op;
    double result = 0, priT = 0, ultT = 0;
    const double PI = 3.14159265;

    cout << "Bem-Vindo a Calculadora 2.0 em C++\n" << endl;
    do {
        cout << "1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | PI | ANS | C | EXT |" << endl;
        cout << "+ | - | / | * | R |\n" << endl;

        cin >> primeiro;
        if (primeiro == "ANS") {
            priT = result;
        } else if (primeiro == "PI") {
            priT = PI;
        } else if (primeiro == "EXT") {
            var = 0;
            break;
        } else if (primeiro == "C") {
            priT = 0;
            ultT = 0;
            result = 0;
            cout << "A calculadora foi limpa." << endl;
            continue;
        } else {
            priT = stod(primeiro);
        }

        cin >> op;
        if (op == 'R') {
            result = sqrt(priT);
            cout << "\nO Resultado da: " << result << endl;
            continue;
        }

        cin >> ultimo;
        if (ultimo == "ANS") {
            ultT = result;
        } else if (ultimo == "PI") {
            ultT = PI;
        } else {
            ultT = stod(ultimo);
        }

        switch (op) {
            case '+':
                result = priT + ultT;
                cout << "\nO Resultado da: " << result << endl;
                break;
            case '-':
                result = priT - ultT;
                cout << "\nO Resultado da: " << result << endl;
                break;
            case '/':
                result = priT / ultT;
                cout << "\nO Resultado da: " << result << endl;
                break;
            case '*':
                result = priT * ultT;
                cout << "\nO Resultado da: " << result << endl;
                break;
        }
    } while (var == 1);
    
    cout << "\nObrigado por usar a melhor Calculadora" << endl << "Volte Sempre!  :)" << endl;
    return 0;
}