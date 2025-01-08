#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade, anonasc, anoatual,parcelas;
	float valorcompra=0, valor,valorparcelas=0;
	char resp;
	
do{
	
	cout << "Qual seu nome? \n";
	getline (cin, nome);
	
	cout << "Qual seu ano de nascimento? \n";
	cin >> anonasc;
	
	cout << "Qual ano da compra? \n";
	cin >> anoatual;
	
	cout << "Qual o valor da sua compra? \n";
	cin >> valor;
	
	idade = anoatual-anonasc;
	
	if (idade >=70){
		parcelas = 3;
	}else{
	if (valor >= 1000){
	parcelas = 12;
	}else if (valor >= 500 && valor < 1000){
	parcelas = 9;
	}else if ( valor < 500 && valor >= 200){
	parcelas = 6;		
	}else if ( valor <200 && valor >= 50){
	parcelas = 3;	
	}else{
		parcelas = 1;
		}
		}	
	valorparcelas = valor / parcelas;
	
	cout << "Nome do Cliente \n"<< nome << endl;
	cout << "Idade \n" << idade << endl;
	cout << "Valor \n" << valor << endl;
	cout << "Valor parcelas \n" << valorparcelas<< endl;
	cout << "Parcelas \n" << parcelas << endl;
	 
	cout << "Deseja realizar um novo cálculo (S/N)? ";
	cin >> resp;
	cin.ignore();
	 
}while (resp == 'S');


	return 0;
}
