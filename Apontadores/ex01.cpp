#include <iostream>
using namespace std;

/* Crie uma variável chamada Numero do tipo inteiro e o seu valor inicial é 234;
Crie um ponteiro chamado Ponteiro capaz de apontar para a variável Numero;

Troque o valor de Numero para 1456 usando o Ponteiro;

Imprima o valor da variável Numero usando o Ponteiro;

Mostre o endereço de memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero;

Usando Ponteiro soma 200 ao valor contido em Numero;

Imprima o valor da variável Numero usando o Ponteiro; */

int main() {
    int numero = 234;
    int *ponteiro;

    ponteiro = &numero;
    *ponteiro = 1456;

    printf("Endereco do Numero:  %numero\n", &numero);
    cout << "| ";
    printf("Endereco do Ponteiro: %ponteiro\n",  &ponteiro);

    *ponteiro += 200;
    cout << "Valor do Numero: " << numero;
}
