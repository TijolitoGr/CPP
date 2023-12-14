# include <iostream>
using namespace std;

/* 46. Escreve um algoritmo que leia um número não determinado de valores e calcule a 
média dos valores lidos, a quantidade de valores positivos, a quantidade de valores 
negativos e o percentual de valores negativos e positivos. Mostre os resultados. */

int main() {
    
    int input, media = 0, pos = 0, neg = 0, quant = 0;
    
    for (int i = 1; i <= 10; i++) {
        
        cout << "Insira um numero: ";
        cin >> input;
        
        quant = quant + 1;
        media = media + input;
        
        if (input >= 0) {
        pos = pos + 1;
        } else if (input <= 0) {
        neg = neg + 1;
        }
    
    }
    
    media = media / 10;
    
    cout << "\n######################################\n";
    cout << "A media desses numeros: " << media << endl;
    cout << "Quantidade de Numeros Positivos: " << pos << endl;
    cout << "Quantidade de Numeros Negativos: " << neg << endl;
    
    pos = (pos * 100) / quant;
    neg = (neg * 100) / quant;
    
    cout << "Percentual de Numeros Positivos: " << pos << "%" << endl;
    cout << "Percentual de Numeros Negativos: " << neg << "%" << endl;
    
    return 0;
}
