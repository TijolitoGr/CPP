# include <iostream>
# define MAX 5
using namespace std;

/* 40. Escreve um algoritmo que leia uma quantidade de números e conte quantos 
deles estão nos seguintes intervalos: [1-25], [26-50], [51-75] e [76-100]. */

int main() {
    
    int input, var = 1;
    int i1 = 0,i2 = 0,i3 = 0,i4 = 0;
    
    while (var==1) {
        
        cout << "Insira numeros entre 1-100 (0 - Parar)" << endl << ": ";
        cin >> input;
        
        if (input == 0) {
            
            cout << "Quantidade no Intervalo: [1-25]:   " << i1 << endl;
            cout << "Quantidade no Intervalo: [26-50]:  " << i2 << endl;
            cout << "Quantidade no Intervalo: [51-75]:  " << i3 << endl;
            cout << "Quantidade no Intervalo: [76-100]: " << i4 << endl;
            var = 0;
        
        } else if (input >= 1 && input <= 25) {
            i1 = i1 +1;
        } else if (input >= 26 && input <= 50) {
            i2 = i2 +1;
        } else if (input >= 51 && input <= 75) {
            i3 = i3 +1;
        } else if (input >= 76 && input <= 100) {
            i4 = i4 +1;
        }
        
    }
    
    return 0;
}
