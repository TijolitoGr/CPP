# include <iostream>
# define MAX 6
using namespace std;

/* 35. O programa de fidelidade de uma determinada livraria premia seus clientes de acordo 
com o número de livros comprados a cada mês. Os pontos são atribuídos da seguinte forma:
 - Se um cliente comprar 0 livros, ele ganhará 0 pontos.
 - Se um cliente comprar um livro, ele ganhará 5 pontos.
 - Se um cliente comprar dois livros, ele ganhará 15 pontos.
 - Se um cliente comprar 3 livros, ele ganhará 30 pontos.
 - Se um cliente comprar 4 ou mais livros, ele ganhará 60 pontos.
Crie um algoritmo que leia o número de livros comprado por um cliente e exiba o número de pontos correspondentes.*/

int main(){

    int input;
    float vec[MAX] = {};

    do {

        cout << "\nInsira o seu voto: " << endl;
        cout << "\n1 - Joe Biden\n";
        cout << "2 - Marcelo Sousa\n";
        cout << "3 - Luis da Loje\n";
        cout << "4 - Guanyu Zhou\n\n";
        cout << "5 - Voto Nulo\n";
        cout << "6 - Voto em Branco\n";
        cin >> input;

        switch (input) {
            case 1: 
                cout << "\nVotas-te em Joe Biden\n";
                vec[0]++;
                break;

            case 2: 
                cout << "\nVotas-te em Marcelo Sousa\n";
                vec[1]++;
                break;

            case 3: 
                cout << "\nVotas-te em Luis da Loje\n";
                vec[2]++;
                break;

            case 4: 
                cout << "\nVotas-te em Guanyu Zhou\n";
                vec[3]++;
                break;

            case 5: 
                cout << "\nVoto Nulo\n";
                vec[4]++;
                break;

            case 6:
                cout << "\nVoto em Branco\n";
                vec[5]++;
                break;

            case 0:
                cout << "Votos de Joe Biden: " << vec[0] << endl;
                cout << "Votos de Marcelo Sousa: " << vec[1] << endl;
                cout << "Votos de Luis da Loje: " << vec[2] << endl;
                cout << "Votos de Guanyu Zhou: " << vec[3] << endl;
                cout << "Votos Nulos: " << vec[4] << endl;
                cout << "Votos em Branco: " << vec[5] << endl;
                break;

            default:
                break;
            }


    } while (1 == 1);

    return 0;
}