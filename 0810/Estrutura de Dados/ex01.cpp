#include <iostream>
using namespace std;

/* Observe o código abaixo e cria uma struct Ponto3D para representar as coordenadas X, Y e Z.
Coloque a função DesenharPontos3D dentro da stuct e altere o parâmetro para Pontos3D pontos

#include <iostream>
using namespace std;

void DesenharPontos3D(int x, int y, int z) {
    cout << "X: " << x << "  Y: " << y << "  Z: " << z << endl;
}

int main() {
    DesenharPontos3D(3, 4, 5);
    return 0;
}*/

struct Pontos3D {
    int x, y, z;

    void DesenharPontos3D() {
        cout << "X: " << x << "  Y: " << y << "  Z: " << z << endl;
    }
};

int main() {
    Pontos3D pontos;
    pontos.x = 3;
    pontos.y = 4;
    pontos.z = 5;

    pontos.DesenharPontos3D();

    return 0;
}