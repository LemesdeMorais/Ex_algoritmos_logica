#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
    const int TAMANHO = 7;
    int vetor1[TAMANHO], vetor2[TAMANHO], resultado[TAMANHO];
    char operacoes[TAMANHO];

    cout << "Digite 7 números para o primeiro vetor: \n";
    for (int i = 0; i < TAMANHO; i++) {
        cin >> vetor1[i];
    }

    cout << "Digite 7 números para o segundo vetor: \n";
    for (int i = 0; i < TAMANHO; i++) {
        cin >> vetor2[i];
    }

    cout << "Digite 7 operações (+, -, *, /) para o vetor de operações: \n";
    for (int i = 0; i < TAMANHO; i++) {
        cin >> operacoes[i];
    }

    for (int i = 0; i < TAMANHO; i++) {
        switch (operacoes[i]) {
            case '+':
                resultado[i] = vetor1[i] + vetor2[i];
                break;
            case '-':
                resultado[i] = vetor1[i] - vetor2[i];
                break;
            case '*':
                resultado[i] = vetor1[i] * vetor2[i];
                break;
            case '/':

                if (vetor2[i] != 0) {
                    resultado[i] = vetor1[i] / vetor2[i];
                } else {
                    cout << "Erro: Divisao por zero na posição " << i << endl;
                    resultado[i] = 0; 
                }
                break;
            default:
                cout << "Operação inválida na posição " << i << endl;
                resultado[i] = 0; 
                break;
        }
    }

    cout << "Vetor de resultados: ";
    for (int i = 0; i < TAMANHO; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}

