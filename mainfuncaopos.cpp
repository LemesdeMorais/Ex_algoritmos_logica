#include <iostream>
#include <locale>

using namespace std;

bool ehPrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;

    for (int i = 3; i < numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int numero;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << "O número " << numero << " é primo." << endl;
    } else {
        cout << "O número " << numero << " não é primo." << endl;
    }

    return 0;
}


