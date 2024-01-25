#include <iostream>
#include <string>
using namespace std;

/*3. Gestão de clientes de uma discoteca. Pretende–se um programa para a gestão de clientes
de uma discoteca. A cada cliente é dado, à entrada, um cartão com um número. Os cartões estão
previamente numerados e existe uma lista de produtos (código do produto, descrição e preço)
também previamente definida. 

De cada vez que o cliente consome algum produto é registado no cartão o código do produto assim 
como a quantidade. É necessário verificar se o código do produto introduzido é valido. Se o 
cliente exceder os 10 consumos terá que liquidar a conta e pedir novo cartão. Quando um cliente sai,
o programa deverá calcular o preço a pagar pelo cliente e registar esse cartão como pago (deverá 
apresentar a relação dos consumos com totais parciais e totais).

3.1 Defina as estruturas necessárias para a resolução do problema;

3.2 Crie uma função que numere os cartões a partir de um número dado pelo utilizador, 
supondo que serão necessários, no máximo 600;

3.3 Crie uma função que inicie a lista de produtos, supondo que existem 10 produtos;

3.4 Crie uma função para registar a entrada dos clientes;

3.5 Crie uma função para inserir consumos aleatórios;

3.6 Crie uma função para calcular a despesa de um cliente;

3.7 Crie uma função para indicar o número de clientes na discoteca;

3.8 Crie uma função que permita listar os produtos.*/

struct Discoteca {
    string produtos[10] = {"1 - Agua", "2 - Cerveja", "3 - Sumo", "4 - Vinho", "5 - Martini", "6 - Biscoitos", "7 - Amendoins", "8 - Tremocos", "9 - Espeto", "10 - Sandes"};
    double precos[10] = {1, 3, 2.5, 5, 6, 3, 1.5, 2.5, 4.5, 4};
    double consumos[10] = {};
    string cartao_nome[600] = {};
    double despesa[600] = {};
    int limite_despesas[600] = {};
    int next_card = 0;
    int temp_pri = 0, temp_sec = 0, temp_tre = 0;
    
    void registrar_entrada() { 
        cout << "Insira o ID do Cliente: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, cartao_nome[next_card]);
        next_card++;
    };

    void criar_compra() {
        cout << "Insira o ID do Cliente: ";
        cin >> temp_pri;
            if (limite_despesas[temp_pri] >= 11) {
                cout << "Este cliente nao podera comprar mais nada. Deseja liquidar o cartao?\n0 - Nao\n1 - Sim\nOpcao: ";
                cin >> temp_tre;
                if (temp_tre == 1) {
                    despesa[next_card] + 20;
                    registrar_entrada();
                    cout << "Novo cartao [" << next_card-- << "] criado com exito!\n";
                }
                return;
            }
        cout << "O que pretende comprar?: ";
        listar_produtos();
        cout << "Opcao: ";
        cin >> temp_sec;
        despesa[temp_pri] = despesa[temp_pri] + precos[temp_sec];
        limite_despesas[temp_pri]++;
    }

    void ver_despesa() {
        cout << "Insira o ID do Cliente: ";
        cin >> temp_pri;
        cout << "Despesa atual: " << despesa[temp_pri] << " Euros\n";
    }

    void numero_clientes() {
        cout << "Numero de Clientes: " << next_card << "\n\n";
    };

    void listar_produtos() {
        cout << "\n##########################\n";
        for (int i = 0; i <= 9; i++) {
            cout << produtos[i] << " " << precos[i] << endl;
        }
        cout << "##########################\n\n";
    };

    void limpar_cartoes() {
        for (int i = 0; i <= 599; i++) {
            cartao_nome[i] = "";
            despesa[i] = 0;
            limite_despesas[i] = 0;
        }
        next_card = 0;
    };
};

int main() {
    Discoteca Discoteca;
    int opcao = -1;

    do { // Meter "~" numa entrada de numeros faz repetidamente o comando
        cout << "1 - Registrar Entrada\n";
        cout << "2 - Criar uma compra\n";
        cout << "3 - Ver Despesas\n";
        cout << "4 - Numero de Clientes\n";
        cout << "5 - Lista de Produtos\n";
        cout << "6 - Limpar Cartoes\n";
        cout << "0 - Sair do programa\n";
        cout << "Opcao a escolher: ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
        case 1:
            Discoteca.registrar_entrada();
            break;
        case 2:
            Discoteca.criar_compra();
            break;
        case 3:
            Discoteca.ver_despesa();
            break;
        case 4:
            Discoteca.numero_clientes();
            break;
        case 5:
            Discoteca.listar_produtos();
            break;
        case 6:
            Discoteca.limpar_cartoes();
            break;
        }

    } while (opcao != 0);
    return 0;
}