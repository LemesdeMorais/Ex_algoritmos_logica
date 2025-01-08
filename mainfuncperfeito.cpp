#include <iostream>
#include <locale>

using namespace std;

bool ehPerfeito(int numero) {
    if (numero <= 1) return false;

    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    return soma == numero;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (ehPerfeito(numero)) {
        cout << "O número " << numero << " é perfeito." << endl;
    } else {
        cout << "O número " << numero << " não é perfeito." << endl;
    }

    return 0;
}

