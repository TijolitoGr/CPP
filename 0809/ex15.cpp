#include <iostream>
using namespace std;

// 15. Escreve um algoritmo que receba uma idade e classifique nas categorias:

int main() {

    int numero;

    cout << "Insira uma idade: \n";
    cin >> numero;

    if (numero >= 5 && numero <= 7) {
        cout << "\nInfantil A";

    } else if (numero >= 8 && numero <= 10) {
        cout << "\nInfantil B"; 
    
    } else if (numero >= 11 && numero <= 13) {
        cout << "\nJuvenil A"; 

    } else if (numero >= 14 && numero <= 17) {
        cout << "\nJuvenil B";

    } else if (numero >= 18) {
        cout << "\nAdulto";
    }

    return 0;   
}
