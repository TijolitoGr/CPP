#include <iostream> 
using namespace std;
#define MAX 6

// TESTE
// 1. [4] Escreva um programa que lê 6 valores inteiros e, 
// em seguida mostre os valores lidos pela ordem inversa.

int main() {

	int vec[MAX] = {};

	for (int i = 0; i < MAX; i++) {
		cout << "Insira um valor: ";
		cin >> vec[i];
	}

	for (int i = 5; i > -1; i--) {
		cout << vec[i] << " | ";
		
	}

	return 0;
}