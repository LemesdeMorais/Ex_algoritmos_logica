#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho dos vetores (N): ";
    cin >> N;

    int A[N], B[N], C[N], D[N];
    int somaA = 0, somaB = 0, produtoEscalar = 0;

    cout << "Digite os elementos do vetor A: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos do vetor B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        somaA += A[i];
    }

    for (int i = 0; i < N; i++) {
        somaB += B[i];
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    for (int i = 0; i < N; i++) {
        D[i] = A[i] - B[i];
    }

    for (int i = 0; i < N; i++) {
        produtoEscalar += A[i] * B[i];
    }

    cout << "Soma dos elementos de A: " << somaA << endl;
    cout << "Soma dos elementos de B: " << somaB << endl;

    cout << "Vetor C (A + B): ";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    cout << "Vetor D (A - B): ";
    for (int i = 0; i < N; i++) {
        cout << D[i] << " ";
    }
    cout << endl;

    cout << "Produto escalar de A por B: " << produtoEscalar << endl;

    return 0;
}

