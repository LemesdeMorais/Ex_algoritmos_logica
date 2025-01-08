#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 10;
    int matriz[TAMANHO][TAMANHO];
    int maiorValor;
    int linhaMaior = 0, colunaMaior = 0;

    // Leitura dos elementos da matriz
    cout << "Digite os elementos da matriz 10x10:" << endl;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            cin >> matriz[i][j];
            
            // Inicializar maiorValor com o primeiro elemento
            if (i == 0 && j == 0) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }

            // Verificar se o elemento atual é o maior
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Exibindo o maior valor e sua localização
    cout << "Maior valor encontrado: " << maiorValor << endl;
    cout << "Localizacao (linha, coluna): (" << linhaMaior << ", " << colunaMaior << ")" << endl;

    return 0;
}

