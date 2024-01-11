#include <iostream>
using namespace std;

/* 2. Crie um programa que receba os dados: ID, título, autor, editora e ano de cinco livros diferentes e mostre os dados. */

struct Dados {
    int id[4], ano[4];
    string titulo[4], autor[4], editora[4];

    void MostrarDados(){
        for (int i = 0; i < 4; i++) {
            cout << "ID: " << id[i] << endl << "Titulo: " << titulo[i] << endl;
            cout << "Autor: " << autor[i] << endl << "Editora: " << editora[i] << endl;
            cout << "Ano. " << ano[i] << endl;
        }
    }
};

int main() {
    
    Dados data;
    
    for (int i = 0; i < 4; i++) {
        cout << "Insira o ID do proximo Livro: "; 
        cin >> data.id[i];
        cout << "\nInsira o titulo do Livro: ";
        cin >> data.titulo[i];
        cout << "\nInsira o Autor: ";
        cin >> data.autor[i];
        cout << "\nInsira a Editora: ";
        cin >> data.editora[i];
        cout << "\nInsira o Ano: ";
        cin >> data.ano[i];
    }

    data.MostrarDados();
    return 0;
}