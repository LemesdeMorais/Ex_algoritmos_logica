#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 4;
    int matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO], matrizResultado[TAMANHO][TAMANHO];

    // Leitura da primeira matriz
    cout << "Digite os elementos da primeira matriz 4x4:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Leitura da segunda matriz
    cout << "Digite os elementos da segunda matriz 4x4:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Criando a terceira matriz com os maiores elementos
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matrizResultado[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }

    // Exibindo a matriz resultado
    cout << "Matriz com os maiores elementos entre as duas matrizes:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

