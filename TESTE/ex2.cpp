#include <iostream> 
using namespace std;
#define MAX 12

// TESTE
// 2. [11] Escreva um programa que permita registar as temperaturas médias de cada um dos meses de um ano. 
// 
// A) [2] Apresente todos os valores de temperatura registrados.
// 
// B) [4] Altere o programa para que, após a leitura das temperaturas,
// seja facultada ao utilizador a possibilidade de pesquisar a ocorrência 
// ou não de uma dada temperatura. Construa o algrotimo de modo que a pesquisa 
// termina assim que o valor seja encontrado, evitando dessa forma percorrer
//  todo o vetor quando tal não seja necesssário.
//
// C) [5] Altere uma vez mais o programa de forma que passe a apresentar a média da temperatura anual,  
// a temperatura mais elevada, a mais baixa,  e amplitudade termica (diferencia entre a maior e a menor).

int main() {

	int vec[MAX] = {};
	int maior = -99999, menor = 99999, amp = 0;
	int media = 0, opcao = 0, pesquisa = 0;

	for (int i = 0; i < MAX; i++) {
		cout << "Insira um valor da Temperatura do " << "[" << i+1 << "] mes: ";
		cin >> vec[i];
		media = media + vec[i];

		if (vec[i] > maior) {
			maior = vec[i];

		} else if (vec[i] < menor) {
			menor = vec[i];
		}
	}

	cout << "Deseja facultar alguama temperatura? (0-Nao | 1-Sim): ";
	cin >> opcao;

	switch (opcao) {
		case 1:
			cout << "Qual Temperatura deseja Facultar: " << endl;
			cin >> pesquisa;
			for (int i = 0; i < MAX; i++) {
				if (pesquisa == vec[i]) {
					cout << "Essa temperatura foi Encontrada no mes: " << i+1 << endl;
				}
			}
			break;
		case 0:
			break;
	}

	amp = maior - menor;
	media = media / MAX;
	cout << "\nA Media da Temperatura Anual e de: " << media << endl;
	cout << "A Temperatura mais Elevada e de: " << maior << endl;
	cout << "A Temperatura mais Baixa e de: " << menor << endl;
	cout << "A Amplitude Termica e de: " << amp << endl << endl;

	for (int i = 0; i < MAX; i++) {
		cout << "Mes (" << i + 1 << ") teve a Temperatura de: " << vec[i] << endl;
	}

	return 0;
}