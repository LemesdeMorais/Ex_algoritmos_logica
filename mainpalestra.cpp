#include <iostream>
#include <cstring>

using namespace std;

int main() {
	

    const int TOTAL_PALESTRAS = 4;
    const int TAMANHO_TEXTO = 30; 
    char palestras[TOTAL_PALESTRAS][3][TAMANHO_TEXTO] = {
        {"Linux", "Auditorio 1", "8h as 9h"},
        {"Recuperacao de Desastres", "Auditorio 2", "9h as 10h"},
        {"Windows Server", "Auditorio 3", "13h as 14h"},
        {"Logica e Programacao", "Auditorio Principal", "15h as 17h"}
    };

    int codigoPalestra;

    cout << "Digite o numero da palestra (1 a 4): ";
    cin >> codigoPalestra;

    if (codigoPalestra >= 1 && codigoPalestra <= TOTAL_PALESTRAS) {

        int indice = codigoPalestra - 1;
        cout << "Palestra: " << palestras[indice][0] << endl;
        cout << "Local: " << palestras[indice][1] << endl;
        cout << "Horario: " << palestras[indice][2] << endl;
    } else {
        cout << "Codigo de palestra invalido!" << endl;
    }

    return 0;
}

