#include <iostream>
#include <cstring> // Para manipular char arrays
using namespace std;

int main() {
    // Definindo a matriz de palestras com char arrays
    const int TOTAL_PALESTRAS = 4;
    const int TAMANHO_TEXTO = 30; // Tamanho máximo de cada string
    char palestras[TOTAL_PALESTRAS][3][TAMANHO_TEXTO] = {
        {"Linux", "Auditorio 1", "8h as 9h"},
        {"Recuperacao de Desastres", "Auditorio 2", "9h as 10h"},
        {"Windows Server", "Auditorio 3", "13h as 14h"},
        {"Logica e Programacao", "Auditorio Principal", "15h as 17h"}
    };

    int codigoPalestra;

    // Leitura do código da palestra
    cout << "Digite o número da palestra (1 a 4): ";
    cin >> codigoPalestra;

    // Verifica se o código é válido
    if (codigoPalestra >= 1 && codigoPalestra <= TOTAL_PALESTRAS) {
        // Ajuste do índice para acessar a matriz
        int indice = codigoPalestra - 1;
        cout << "Palestra: " << palestras[indice][0] << endl;
        cout << "Local: " << palestras[indice][1] << endl;
        cout << "Horario: " << palestras[indice][2] << endl;
    } else {
        cout << "Codigo de palestra invalido!" << endl;
    }

    return 0;
}
