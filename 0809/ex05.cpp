#include <iostream> 
using namespace std;

// 5. Escreve um algoritmo que calcule o valor do perímetro de retângulo. 
// P = 2 \* (c + l).

int main() {

    float c,l,result;

    cout << "Insira o comprimento: \n";
    cin >> c;
    cout << "Insira a largura: \n";
    cin >> l;

    result = (c * 2) + (l *2);
    
    cout << "O perimetro de um retangulo com comprimento e largura de " << "(c:" << c << " | " << "l:" << l << ") e de: " << result << ".";
    return 0;   

}
