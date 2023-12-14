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

    int input, points = 0;

    do {

        cout << "Quantos Livros o Cliente (Martim Cabral) comprou este mes?: ";
        cin >> input;

        switch (input) {
            case 0: 
                cout << "\nNao ganhaste nenhum Ponto.\n";
                break;

            case 1: 
                cout << "\nGanhaste 5 Pontos!\n";
                points = points + 5;
                break;

            case 2: 
                cout << "\nGanhaste 15 Pontos!\n";
                points = points + 15;
                break;

            case 3: 
                cout << "\nGanhaste 30 Pontos!\n";
                points = points + 30;
                break;

            case 4: 
                cout << "\nGanhaste 60 Pontos!\n";
                points = points + 60;
                break;

            case 5:
                cout << "Quantidade de Pontos: " << points << endl;

            default:
                break;
            }

    } while (1 == 1);

    return 0;
}