#include <iostream>
#include <string>
#include <limits>
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
    int next_contract = 0;
    string nome[MAX] = {}, categoria[MAX] = {}, data_contrato[MAX] = {}, data_entrada[MAX] = {};
    int temp_pri = 0;
    
    void contratar() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Insira o nome do Cliente: \n";
        getline(cin, nome[next_contract]);
        cout << "Insira a Categoria do seu Trabalho: \n";
        getline(cin, categoria[next_contract]);
        cout << "Insira o tamanho do Contrato: \n";
        getline(cin, data_contrato[next_contract]);
        cout << "Insira a Data de Entrada deste Trabalhador: \n";
        getline(cin, data_entrada[next_contract]);
        cout << "Pessoa Contrada com sucesso!\n\n";
        next_contract++;
    };

    void listar_um() {
        cout << "Quem deseja listar [ID]?: ";
        cin >> temp_pri;

        if (nome[temp_pri] == "") {
            cout << "Nao ha trabalhador com esse ID!\n\n";
        } else {
        cout << "\n\n######################";
        cout << "\nNome: " <<  nome[temp_pri];
        cout << "\nCategoria: " << categoria[temp_pri];
        cout << "\nTamanho do Contrato: " << data_contrato[temp_pri];
        cout << "\nData de Entrada: " << data_entrada[temp_pri];
        cout << "\n######################\n\n";
        }
    };
    
    void listar_todos() {
        if (nome[temp_pri] == "") {
            cout << "";
        } else {
            for (int i = 0; i <= MAX; i++) {
                cout << "\n######################";
                cout << "\nNome: " <<  nome[i];
                cout << "\nCategoria: " << categoria[i];
                cout << "\nTamanho do Contrato: " << data_contrato[i];
                cout << "\nData de Entrada: " << data_entrada[i];
                cout << "\n######################\n\n";
            }
        }
    };

    void despedir_funcionario() {
        cout << "Quem deseja despedir [ID]?: ";
        cin >> temp_pri;
        if (nome[temp_pri] == "") {
            cout << "Nao ha trabalhador com esse ID!\n\n";
        } else {
            nome[temp_pri] = "";
            categoria[temp_pri] = "";
            data_contrato[temp_pri] = "";
            data_entrada[temp_pri] = "";
        }
    };

    void no_djin_djin() {
        for (int i = 0; i <= MAX; i++) {
            nome[i] = "";
            categoria[i] = "";
            data_contrato[i] = "";
            data_entrada[i] = "";
        }
    };
};

int main() {
    Empresa Empresas;
    int opcao = -1;

    do {
    
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
            } 
        } while (opcao != 0);
    return 0;
}