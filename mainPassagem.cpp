#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    
    system ("cls");
    do {
        cout << "==================================================\n";
        cout << "1 - Região Norte - IDA - R$500,00               =\n";
        cout << "2 - Região Norte - IDA/VOLTA - R$900,00         =\n";
        cout << "3 - Região Nordeste - IDA - R$350,00            =\n";
        cout << "4 - Região Nordeste - IDA/VOLTA - R$650,00      =\n";
        cout << "5 - Região Centro-Oeste - IDA - R$350,00        =\n";
        cout << "6 - Região Centro-Oeste - IDA/VOLTA - R$600,00  =\n";
        cout << "7 - Região Sul - IDA - R$300,00                 =\n";
        cout << "8 - Região Sul - IDA/VOLTA - R$550,00           =\n";
        cout << "=================================================\n";
        cout << "9 - SAIR \n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: cout << "O valor da sua passagem é R$500,00.\n"; break;
            case 2: cout << "O valor da sua passagem é R$900,00.\n"; break;
            case 3: cout << "O valor da sua passagem é R$350,00.\n"; break;
            case 4: cout << "O valor da sua passagem é R$650,00.\n"; break;
            case 5: cout << "O valor da sua passagem é R$350,00.\n"; break;
            case 6: cout << "O valor da sua passagem é R$600,00.\n"; break;
            case 7: cout << "O valor da sua passagem é R$300,00.\n"; break;
            case 8: cout << "O valor da sua passagem é R$550,00.\n"; break;
            case 9: cout << "Saindo do programa. Obrigado!\n"; break;
            default: cout << "Escolha uma opção válida.\n"; break;
        }

    } while (opcao != 9);
    system ("pause");

    return 0;
}

