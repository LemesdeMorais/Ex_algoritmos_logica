#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale (LC_ALL,"portuguese");
	
	int qnt;
	float valorp=30, valorm=40,valorg=50, total;
	char tamanho;
do {
	system ("cls");	
	cout << "Quantas camisetas voc� quer comprar? \n";
	cin >> qnt;
	
	
	cout <<"+=====================+\n";
	cout << "Selecione o tamanho \n";
	cout <<" P \n";
	cout <<" M \n";
	cout <<" G \n";
	cout <<"+=====================+\n";
	cin >>tamanho;
	
	if (tamanho == 'P'){
		cout << "Voc� escolheu o tamanho P no valor de R$30,00 \n";
		total = valorp*qnt;		
}else if
	   (tamanho == 'M'){
	   	cout << "Voc� escolheu o tamanho M no valor de R$ 40,00 \n";
	   	total = valorm*qnt;
}else if (tamanho == 'G'){
	    cout << "Voc� escolheu o tamanho G no valor de R$ 50,00 \n";
	    total = valorg*qnt;
}else{
	cout << "Tamanho inv�lido, escolha P, M ou G. \n";
}

	cout << " O valor total da sua compra � R$ "<< total<<endl;
system ("pause");
}while (tamanho == 'P' || tamanho == 'M'|| tamanho == 'G');

	return 0;
}
