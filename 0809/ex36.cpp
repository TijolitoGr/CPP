# include <iostream>
# define MAX 6
using namespace std;

/* 36. Uma loja de jogos vende cada jogo por 50 euros, mas oferece 
descontos conforme a quantidade comprada, conforme a tabela a seguir:
10-19 | 20%
20-49 | 30%
50-99 | 40%
+100  | 50% */

int main(){

    int jogos = 0;

    cout << "Quantos Jogos foram comprados: ";
    cin >> jogos;

    cout << "Em uma compra de " << jogos << " jogos, ";

    if (jogos <= 9) {
        cout << " nenhum desconto será aplicado.\n";
    } else if (jogos >= 10 && jogos <= 19) {
        cout << " um desconto de 20%, deve ser aplicado.\n";
    } else if (jogos >= 20 && jogos <= 49) {
        cout << " um desconto de 30%, deve ser aplicado.\n";
    } else if (jogos >= 50 && jogos <= 99) {
        cout << " um desconto de 40%, deve ser aplicado.\n";
    } else if (jogos >= 100) {
        cout << " um desconto de 50%, deve ser aplicado.\n";
    }

    return 0;
}