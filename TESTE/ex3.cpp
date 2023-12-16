#include <iostream> 
using namespace std;
#define MAX 5

// TESTE
// 3. [2] Faça um programa para ler 5 valores e, em seguida 
// mostrar a posição onde se encontra o maior e menor valor.

int main() {

	int vec[MAX] = {};
	int maior = -99999, menor = 99999;
	int posMaior = 0, posMenor = 0;

	for (int i = 0; i < MAX; i++) {
		cout << "[POS" << i << "] Insira um valor : ";
		cin >> vec[i];

		if (vec[i] > maior) {
			maior = vec[i];
			posMaior = i;

		} else if (vec[i] < menor) {
			menor = vec[i];
			posMenor = i;
		}
	}

	cout << "\nA Posicao do maior Numero (" << maior << ") em vetor e a: " << posMaior << " ou como regsitrado a: (" << posMaior+1 << ")" << endl;
	cout << "A Posicao do menor Numero (" << menor << ") em vetor e a: " << posMenor << " ou como regsitrado a: (" << posMenor+1 << ")";

	return 0;
}