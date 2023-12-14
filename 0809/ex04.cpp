#include <iostream> 
using namespace std;

// 4. Escreve um algoritmo que calcule a idade de uma pessoa, 
// sabendo o ano de nascimento.

int main() {

    float year,birth,result;

    cout << "Insira o ano atual: \n";
    cin >> year;
    cout << "Insira o ano que nasceu: \n";
    cin >> birth;

    result = year - birth;
    
    cout << "Tens : " << result << " anos.";
    return 0;

}
