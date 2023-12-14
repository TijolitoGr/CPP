# include <iostream>
using namespace std;

/* 51. Faz um programa que alimente um vetor, com um número de posições definidas pelo utilizador. 
Este vetor deverá armazenar um conjunto de nomes em diferentes posições. Crie um mecanismo para 
alimentar elementos no vetor e pesquisar por um valor existente. */

int main() {

    int limit = 0, input, option;
    int var = 1;
    string optionname;
    
    cout << "Insira o limite do Vetor: ";
    cin >> limit;
    string vec[limit];
    
    do { 
    
    cout << "\n--{[-    Menu     -]}--\n";
    cout << "1 - Pesquisar Nome\n";
    cout << "2 - Pesquisar Posicao\n";
    cout << "3 - Registrar Nome\n";
    cout << "4 - Mostrar Tudo\n";
    cout << "5 - Fechar Programa\n";
    cout << "Executar Opcao: ";
    cin >> input;
    
        switch (input) {
            case 1:
                cout << "Qual o Nome que deseja Pesquisar: ";
                cin >> optionname;    
                
                for (int i = 0; i <= (limit - 1); i++) {
                    if (vec[i] == optionname) {
                        cout << optionname << " esta na posicao: " << i + 1 << endl;
                    }
                }
                
            break;
            
            case 2:
                cout << "Qual a Posicao que deseja Pesquisar: ";
                cin >> option;
                
                cout << "Na posicao (" << option + 1  << ") o Nome registrado e: " << vec[option];
            break;
            
            case 3:
                cout << "Em que posicao deseja posicionar o Nome: ";
                cin >> option;
                option = option - 1;
          
                cout << "Qual o Nome que deseja alocar?: ";
                cin >> optionname;
                vec[option] = optionname;
            break;
           
            case 4:
                for (int i = 0; i <= (limit - 1); i++) {
                cout << "Nome (" << i + 1<< "): " << vec[i] << endl;
                }
            break;
            
            case 5:
                var = 0;
            break;
                
        }
        
    } while (var == 1);
    
    return 0;
}
