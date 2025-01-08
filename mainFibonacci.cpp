#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
    int n;  
    
    cout << "Qual o número de termos para a sequência de Fibonacci? ";
    cin >> n;
    
        if (n <= 0) {
        cout << "Insira um número válido!" << endl;
        return 1;
    }

    long long a = 0, b = 1;

    cout << "A sequência de Fibonacci até " << n << " termos é:" << endl;

    
    if (n >= 1) cout << a << " ";  
    if (n >= 2) cout << b << " "; 

    
    for (int i = 3; i <= n; ++i) {
        long long next = a + b; 
        cout << next << " ";     
        a = b;                   
        b = next;                
    }

    cout << endl;

    return 0;
}

