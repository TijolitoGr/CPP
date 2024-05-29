#include <iostream>
#include <limits>
#include <string>
#define MAX 100

using namespace std;

struct DataDePublicacao {
    int dia, mes, ano;

    void imprimir() {
        cout << "\nData de Publicacao: ";
        cout << "\nDia: " << dia << "\nMes: " << mes << "\nAno: " << ano << endl;
    }
};

struct Biblioteca {
    DataDePublicacao datadepublicacao;
    string tituloLivro, autorLivro;

    void imprimir() {
        cout << "\nTitulo: " << tituloLivro << "\nAutor: " << autorLivro;
        datadepublicacao.imprimir();
    }
};

void imprimirLivros(Biblioteca livro[MAX], int total) {
    for (int i = 0; i < total; i++) {
        livro[i].imprimir();
        cout << "\n\n";
    }
};

void inserirLivro(Biblioteca (*livro)[MAX], int (*total)) {
    Biblioteca biblioteca;
    
    cout << "\nInsira um titulo: ";
    cin >> biblioteca.tituloLivro;

    cout << "\nInsira o autor: ";
    cin >> biblioteca.autorLivro;
    
    cout << "\nInsira a Data de Publicacao: ";
    cout << "\nDia: ";
    cin >> biblioteca.datadepublicacao.dia;

    cout << "\nMes: ";
    cin >> biblioteca.datadepublicacao.mes;

    cout << "\nAno: ";
    cin >> biblioteca.datadepublicacao.ano;

    (*livro[*total]) = biblioteca;
    (*total)++;
};

void encontrarPorTitulo(Biblioteca livro[MAX], int total) {
    string tituloLivro;
    cout << "Insira o titulo do Livro que queira encontrar: \n";
    cin >> tituloLivro;

    bool encontrou = false;

    for (int i = 0; i < total; i++) {
        if (livro[i].tituloLivro == tituloLivro) {
            livro[i].imprimir();
            encontrou = true;
        }
    }

    if (encontrou == false) {
        cout << "\nNao foi possivel encontrar!\n";
    }
};

void encontrarPorAno(Biblioteca livro[MAX], int total) {
    int ano;

    cout << "\nInsira o Ano: ";
    cin >> ano;
    
    bool encontrou = false;

    for (int i = 0; i < total; i++) {
        if (livro[i].datadepublicacao.ano == ano) {
            livro[i].imprimir();
            encontrou = true;
        }
    }

    if (encontrou == false) {
        cout << "\nNao foi possivel encontrar!\n";
    }
}

int main() {
    Biblioteca livro[MAX];
    int totalLivros = 0;
    int opcao = 999;

    do {
        cout << "\n-----------[{- Menu -}]-----------";
        cout << "\n1 - Inserir um Livro";
        cout << "\n2 - Imprimir Biblioteca";
        cout << "\n3 - Pesquisar um Livro pelo Titulo";
        cout << "\n4 - Pesquisar um Livro pelo Ano";
        cout << "\n0 - Sair";
        cout << "\nOpcao: ";

        while (!(cin >> opcao)) {
            cout << "Opcao invalida! Insira novamente: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (opcao) {
            case 1:
                inserirLivro(&livro, &totalLivros);
                break;
            case 2:
                imprimirLivros(livro, totalLivros);
                break;
            case 3:
                encontrarPorTitulo(livro, totalLivros);
                break;
            case 4:
                encontrarPorAno(livro, totalLivros);
                break;
            default:
                cout << "Essa opcao nao existe!" << endl;
        }
    } while (opcao != 0);
}
