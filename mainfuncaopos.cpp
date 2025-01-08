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
    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << "O n�mero " << numero << " � primo." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o � primo." << endl;
    }

    return 0;
}


