#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
	
	int csobremesa = 0, cbebida = 0, cprato = 0, tcalorias = 0;
	
system ("cls");

	cout <<" + =================== +\n";
	cout <<" Escolha seu prato:     \n";
	cout <<" 1-Vegetariano          \n";
	cout <<" 2-Peixe                \n"; 
	cout <<" 3-Frango               \n";
	cout <<" 4-Carne                \n";
	cout <<" +==================== +\n";
	cout <<"Escolha seu prato \n";
	int prato;
	cin >> prato;
	
		switch (prato){
		case 1: cprato = 180 ; break;
		case 2: cprato = 230 ; break;
		case 3: cprato = 250 ; break;
		case 4: cprato = 350 ; break;
		default: cout << "Escolha inv�lida para o prato.\n"; return 1;
	}
	
	cout << "+====================+ \n";
	cout << "1-Abacaxi              \n";
	cout << "2-Sorvete diet         \n";
	cout << "3-Mousse diet          \n";
	cout << "4-Mousse de chocolate  \n";
	cout << "+====================+ \n";
	cout << "Escolha sua sobremesa \n";
	int sobremesa;
	cin >> sobremesa;
	
		switch (sobremesa){
		case 1:csobremesa = 75 ; break;
		case 2:csobremesa = 110 ; break;
		case 3:csobremesa = 170 ; break;
		case 4:csobremesa =200 ; break;
		default: cout << "Escolha inv�lida para o prato.\n"; return 1;
	}
	
	cout << "+====================+ \n";
	cout << "1-Ch�                  \n";
	cout << "2-Suco de laranja      \n";
	cout << "3-Suco de mel�o        \n";
	cout << "4-Refri diet           \n";
	cout << "+====================+ \n";
	cout << "Escolha sua bebida \n";
	int bebida;
	cin >> bebida;
	
	switch (bebida){
		case 1 : cbebida = 20 ; break;
		case 2 : cbebida =70 ; break;
		case 3 : cbebida =100 ; break;
		case 4 : cbebida =65 ; break;
		default: cout << "Escolha inv�lida para o prato.\n"; return 1;
	}
	
	tcalorias = cprato+csobremesa+cbebida;
	
	cout << "Sua refei��o tem um total de: " <<tcalorias <<"."<<endl;
	
	system ("pause");


	
	
	return 0;
}
