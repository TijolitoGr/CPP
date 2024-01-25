#include <iostream>
#include <string>
#define MAX 100
using namespace std;

/*4. Uma Empresa de Construção Civil pretende uma aplicação informática de gestão de recursos humanos. 
A empresa não prevê ultrapassar os 100 funcionários. Os dados dos funcionários são os seguintes: 

- Identificação Primária
- Nome
- Categoria
- Data do Contrato
- Data de Entrada 

-- Defenir as estruturas de dados;

--- Programar uma função para: 
--- Listar os dados de um Funcionário;
--- Listar os dados dos "X" Funcionários da Empresa;
--- Despedir Funcionários*/

struct Empresa {
    int id[MAX] = {};
    string nome[MAX] = {}, categoria[MAX] = {}, data_contrato[MAX] = {}, data_entrada[MAX] = {};
    
    void contratar() {
        cout << "🐸";
    };

    void listar_um() {
        cout << "coco";
    };
    
    void listar_todos() {
        cout << "coco";
    };

    void despedir_funcionario() {
        cout << "coco";
    };

    void no_djin_djin() {
        cout << "coco";
    };

};

int main() {
    Empresa Empresas;
    int opcao = -1;

    cout << "1 - Contratar\n";
    cout << "2 - Listar um Funcionario\n";
    cout << "3 - Listar todos os Funcionarios\n";
    cout << "4 - Despedir Alguem\n";
    cout << "5 - Fazer Empresa Falir\n";
    cout << "0 - Sair\n";
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            Empresas.contratar();
            break;
        case 2:
            Empresas.listar_um();
            break;
        case 3:
            Empresas.listar_todos();
            break;
        case 4:
            Empresas.despedir_funcionario();
            break;
        case 5:
            Empresas.no_djin_djin();
            break;

    } while (opcao != 0);
    return 0;
}