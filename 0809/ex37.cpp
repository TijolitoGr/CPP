# include <iostream>
# define MAX 6
using namespace std;

/* 37. Faz um algoritmo para ler a temperatura atual e conforme leitura,
imprima o resultado de acordo com a tabela abaixo.
até 15 | Muito Frio
16-22  | Frio
23-26  | Agradável
27-30  | Quente
+31    | Muito Quente*/

int main(){

    int temp = 0;

    cout << "Insira a Temperatura Atual: ";
    cin >> temp;

    cout << "A sala esta " << temp << ", e considerado como, "; 

    if (temp <= 15) {
        cout << " Muito Frio\n";
    } else if (temp >= 16 && temp <= 22) {
        cout << "Frio.\n";
    } else if (temp >= 23 && temp <= 26) {
        cout << "Agradavel\n";
    } else if (temp >= 27 && temp <= 30) {
        cout << "Quente\n";
    } else if (temp >= 31) {
        cout << "Muito Quente\n";
    }

    return 0;
}