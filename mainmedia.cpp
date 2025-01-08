#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale (LC_ALL,"portuguese");
    const int nalunos = 10;  
    double n1, n2, maluno, mgeral = 0;

    
    for (int i = 1; i <= nalunos; ++i) {
        cout << "Aluno " << i << ":\n";

        do {
            cout << "Digite a nota 1a.: \n";
            cin >> n1;
            if (n1 < 0 || n1 > 10) {
                cout << "Nota inválida. A nota deve estar entre 0 e 10.\n";
            }
        } while (n1 < 0 || n1 > 10);

        do {
            cout << "Digite a nota 2a.: \n";
            cin >> n2;
            if (n2 < 0 || n2 > 10) {
                cout << "Nota inválida. A nota deve estar entre 0 e 10.\n";
            }
        } while (n2 < 0 || n2 > 10);

        
        maluno = (n1 + n2) / 2;
        maluno = int(maluno * 100) / 100.0;

        cout << "Média do aluno " << i << ": " << maluno << endl;

        
        mgeral += maluno;
    }

    
    mgeral /= nalunos;

   
    mgeral = int(mgeral * 100) / 100.0;

    
    cout << "\nMédia geral da turma: " << mgeral << endl;

    return 0;
}

