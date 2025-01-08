#include <iostream>
#include <locale>

using namespace std;

double calcularVolumeEsfera(double raio) {
    const double PI = 3.14159;
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
	setlocale(LC_ALL,"portuguese");
    double raio;
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double volume = calcularVolumeEsfera(raio);
    cout << "O volume da esfera é: " << volume << endl;

    return 0;
}

