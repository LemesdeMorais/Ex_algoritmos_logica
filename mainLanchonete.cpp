#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
	
    int cod, qnt;          
    double preco, total;         
     

 	cout << "=====================================\n";
    cout << "100- Cachorro quente R$1,20\n";
    cout << "101- Bauru Simples R$1,30\n";
    cout << "102- Bauru com ovo R$1,50\n";
    cout << "103- Hambúrguer R$1,20\n";
    cout << "104-Cheeseburguer R$1,30\n";
    cout << "105- Refrigerante R$1,00\n";
    cout << "===================================== \n";
    cin >> cod;

    
    cout << "Digite a quantidade: ";
    cin >> qnt;

    
    switch (cod) {
        case 100:  
            preco = 1.20;
            break;
        case 101:  
            preco = 1.30;
            break;
        case 102:  
            preco = 1.50;
            break;
        case 103: 
            preco = 1.20;
            break;
        case 104:  
            preco = 1.30;
            break;
        case 105:  
            preco = 1.00;
            break;
        default:
            cout << "Código inválido!" << endl;
            return 1; 
    }

    total = preco * qnt;

  
    cout << "Valor total a ser pago: R$ " << total << endl;

    return 0;
}

