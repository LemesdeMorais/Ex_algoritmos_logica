#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
	
    long long tgraos = 0;  
    long long graos;          

    
    for (int i = 0; i < 64; ++i) {
        graos = 1LL << i; 
        tgraos += graos;  
    }

    cout << "O total de gr�os no tabuleiro de xadrez �: " << graos << endl;

    return 0;
}

