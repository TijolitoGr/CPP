# include <iostream>
# define MAX 5
using namespace std;

/* Faz um programa que receba o nome de cinco produtos e os seus respetivos preços, armazene os em dois vetores separados, 
um para os produtos e o outro para os preços. O programa deve calcular e mostrar:

- A quantidade de produtos com preço inferior a 50.00 euros; below
- O nome dos produtos com preço entre os 50.00 e 100.00 euros;
- A média dos preços dos produtos com preço superior a 100.00 euros. media / preq */

int main() {

    string pro[MAX] = {};
    float pre[MAX] = {};
    int preq = 0, below = 0;
    float media = 0;
    
    for(int i = 0; i <= 4; i++) {
    cout << "Insira o Nome do Produto:  ";
    cout << endl;
    cin >> pro[i];
    cout << "Agora o preco do Produto:  ";
    cout << endl;
    cin >> pre[i];
    
    if (pre[i] <= 50) {
        below = below + 1;
    }
    
    if (pre[i] >= 100) {
        media = media + pre[i];
        preq = preq + 1;
        }
    }
    
    media = media / preq;
    cout << "Quatidade de Produtos inferior a 50 euros: " << preq << endl;
    cout << "Media dos precos dos produtos superiores a 100 euros: " << media << endl;
    cout << "Nome dos produtos com preco entre 50€ e 100 euros: ";
    
    for (int i = 0; i <= 4; i++) {
        if (pre[i] >= 50 && pre[i] <= 100) {
        cout << pro[i] << " | "; 
        }
    }

    return 0;
}
