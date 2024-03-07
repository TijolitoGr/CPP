#include <iostream>
#include <string>
#include <limits>
#define MAX 100
using namespace std;

/*1. [20] Escreva um programa para simular uma agenda de telefones.
A estrutura deve conter:
- Nome
- E-mail
- Endereço (contendo os campos para a rua, número, cidade e país)
- Telefone
- Data de Aniversário

a. [3] Definir a estrutura acima.
b. [3] Declarar a variável agenda (array) com capacidade de agendar até 100 nomes.
c. [3] Imprimir os dados da Agenda.
d. [5] Pesquisar na agenda pelo o nome da pessoa.
e. [3] Imprimir os dados de todas as pessoas que fazem anos nesse mês
f. [3] O programa deve ter um menu principal oferecendo as opções acima.*/

struct Empresa {
    int next_contract = 0, temp_pri = 0;
    string agenda[MAX] = {}, telefone[MAX] = {}, email[MAX] = {}, temp_sec = "";
    string endereco_rua[MAX] = {}, endereco_numero[MAX] = {}, endereco_cidade[MAX] = {}, endereco_pais[MAX] = {};
    string data_aniversario_dia[MAX] = {}, data_aniversario_mes[MAX] = {}, data_aniversario_ano[MAX] = {};

    void adicionar() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n\n\nInsira o Nome: ";
        getline(cin, agenda[next_contract]);
        cout << "\nInsira o E-mail: ";
        getline(cin, email[next_contract]);
        cout << "\nInsira o Endereco [RUA]: ";
        getline(cin, endereco_rua[next_contract]);
        cout << "\nInsira o Endereco [NUMERO]: ";
        getline(cin, endereco_numero[next_contract]);
        cout << "\nInsira o Endereco [CIDADE]: ";
        getline(cin, endereco_cidade[next_contract]);
        cout << "\nInsira o Endereco [PAIS]: ";
        getline(cin, endereco_pais[next_contract]);
        cout << "\nInsira o Telefone: ";
        getline(cin, telefone[next_contract]);
        cout << "\nInsira a Data de Aniversario [DIA]: ";
        getline(cin, data_aniversario_dia[next_contract]);
        cout << "\nInsira a Data de Aniversario [MES]: ";
        getline(cin, data_aniversario_mes[next_contract]);
        cout << "\nInsira a Data de Aniversario [ANO]: ";
        getline(cin, data_aniversario_ano[next_contract]);
        cout << "\n\n### Telefone adiconado com sucesso! ###\n\n";
        next_contract++;
    };

    void listar_por_nome() {
        cout << "Quem deseja encontrar? [NOME EXATO]: ";
        cin >> temp_sec;
   
        for (int i = -1; i <= MAX; i++) {
            if (temp_sec == agenda[i]) {
                cout << "\n\n######################";
                cout << "\nNome: " << agenda[i];
                cout << "\nE-Mail: " << email[i];
                cout << "\nEndereco: " << endereco_rua[i] << ", " << endereco_numero[i] << ", " << endereco_cidade[i] << ", " << endereco_pais[i];
                cout << "\nTelefone: " << telefone[i];
                cout << "\nData de Aniversario: " << data_aniversario_dia[i] << "/" << data_aniversario_mes[i] << "/" << data_aniversario_ano[i];
                cout << "\n######################\n\n";
            }
        }
    };

    void listar_por_mes_aniversario() {
        cout << "Quem deseja encontrar? [MES EXATO]: ";
        cin >> temp_sec;

        for (int i = -1; i <= MAX; i++) {
            if (temp_sec == data_aniversario_mes[i]) {
                cout << "\n\n######################";
                cout << "\nNome: " << agenda[i];
                cout << "\nE-Mail: " << email[i];
                cout << "\nEndereco: " << endereco_rua[i] << ", " << endereco_numero[i] << ", " << endereco_cidade[i] << ", " << endereco_pais[i];
                cout << "\nTelefone: " << telefone[i];
                cout << "\nData de Aniversario: " << data_aniversario_dia[i] << "/" << data_aniversario_mes[i] << "/" << data_aniversario_ano[i];
                cout << "\n######################\n\n";
            }
        }
    }

    void listar_todos() {
            for (int i = 0; i <= MAX; i++) {
                if (agenda[i] == "") {
                    cout << "";
                } else {
                cout << "\n######################";
                cout << "\nNome: " << agenda[i];
                cout << "\nEmail: " << email[i];
                cout << "\nEndereco: " << endereco_rua[i] << ", " << endereco_numero[i] << ", " << endereco_cidade[i] << ", " << endereco_pais[i];
                cout << "\nTelefone: " << telefone[i];
                cout << "\nData de Aniversario: " << data_aniversario_dia[i] << "/" << data_aniversario_mes[i] << "/" << data_aniversario_ano[i];
                cout << "\n######################\n\n";
            }
        }
    };
};

    int main() {
        Empresa Empresas;
        int opcao = -1;

        do {
            cout << "1 - Adicionar Telefone\n";
            cout << "2 - Listar um Telefone pelo Nome\n";
            cout << "3 - Listar todos os Telefones pelo Mes\n";
            cout << "4 - Listar todos os Telefones\n";
            cout << "0 - Sair\n\n";
            cout << "Opcao: ";
            cin >> opcao;

            switch (opcao) {
            case 1:
                Empresas.adicionar();
                break;
            case 2:
                Empresas.listar_por_nome();
                break;
            case 3:
                Empresas.listar_por_mes_aniversario();
                break;
            case 4:
                Empresas.listar_todos();
                break;
            }
        } while (opcao != 0);
        return 0;
    }