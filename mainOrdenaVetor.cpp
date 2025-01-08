#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho do vetor (N): ";
    cin >> N;

    int vetor[N];

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < N; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {

                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    cout << "Vetor ordenado em ordem crescente: ";
    for (int i = 0; i < N; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

