#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    
    system ("cls");
    do {
        cout << "==================================================\n";
        cout << "1 - Regi�o Norte - IDA - R$500,00               =\n";
        cout << "2 - Regi�o Norte - IDA/VOLTA - R$900,00         =\n";
        cout << "3 - Regi�o Nordeste - IDA - R$350,00            =\n";
        cout << "4 - Regi�o Nordeste - IDA/VOLTA - R$650,00      =\n";
        cout << "5 - Regi�o Centro-Oeste - IDA - R$350,00        =\n";
        cout << "6 - Regi�o Centro-Oeste - IDA/VOLTA - R$600,00  =\n";
        cout << "7 - Regi�o Sul - IDA - R$300,00                 =\n";
        cout << "8 - Regi�o Sul - IDA/VOLTA - R$550,00           =\n";
        cout << "=================================================\n";
        cout << "9 - SAIR \n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        switch (opcao) {
            case 1: cout << "O valor da sua passagem � R$500,00.\n"; break;
            case 2: cout << "O valor da sua passagem � R$900,00.\n"; break;
            case 3: cout << "O valor da sua passagem � R$350,00.\n"; break;
            case 4: cout << "O valor da sua passagem � R$650,00.\n"; break;
            case 5: cout << "O valor da sua passagem � R$350,00.\n"; break;
            case 6: cout << "O valor da sua passagem � R$600,00.\n"; break;
            case 7: cout << "O valor da sua passagem � R$300,00.\n"; break;
            case 8: cout << "O valor da sua passagem � R$550,00.\n"; break;
            case 9: cout << "Saindo do programa. Obrigado!\n"; break;
            default: cout << "Escolha uma op��o v�lida.\n"; break;
        }

    } while (opcao != 9);
    system ("pause");

    return 0;
}

