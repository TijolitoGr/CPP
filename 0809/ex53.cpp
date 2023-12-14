# include <iostream>
# define MAX 5
using namespace std;

/* 53. Faz um programa que receba o total das vendas de cada vendedor e guarde em um vetor. Receba também a percentagem da comissão de cada vendedor 
e armazene em outro vetor. Receba os nomes desses vendedores e armazene em um terceiro vetor. Existem apenas dez vendedores. Calcule e mostre:

- Um relatório com os nomes dos vendedores e os valores a receber;
- O total das vendas de todos os vendedores
- O maior valor a receber e quem o receberá
- O menor valor a receber e quem o receberá     */

int main()
{
    int total = 10, maior = 0, menor = 9999999, media, countm = 0, countmen = 0;
    int vendas[total], val[total];
    double precent[total];
    string nvendedor[total];

    for (int i = 0; i < total; i++)
    {
        cout << "Insira o nome do vendedor: ";
        cin >> nvendedor[i];
        cout << "Insira a persentagem de comissao 0-100: ";
        cin >> precent[i];
        cout << "Insira o total de vendas: ";
        cin >> vendas[i];
    }

    cout << "Nomes dos vendadores e o Quanto devem receber: \n";

    for (int i = 0; i < total; i++)
    {
        cout << nvendedor[i] << " deve receber " << (precent[i] / 100) * vendas[i] << '\n';
        val[i] = (precent[i] / 100) * vendas[i];
        cout << val[i] << '\n';
    }

    for (int i = 0; i < total; i++)
    {

        if (val[i] > maior)
        {
            maior = val[i];
            countm = i;
        }

        if (val[i] < menor)
        {
            cout << "menor valor" << val[i] << endl;
            menor = val[i];
            countmen = i;
        }
    }
    cout << "o maior valor e: " << maior << " do vendedor: " << nvendedor[countm] << endl;
    cout << "o menor valor e: " << menor << " do vendedor: " << nvendedor[countmen] << endl;
    
    return 0;
}
