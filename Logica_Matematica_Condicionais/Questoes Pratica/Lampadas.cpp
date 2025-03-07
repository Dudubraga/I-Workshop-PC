/* 
Nome da Questão:Lâmpadas https://neps.academy/br/exercise/52
Nome de quem resolveu: Isabela Medeiros
*/

#include <iostream>
using namespace std;

int main() {
    int numero, A = 0, B = 0, interruptor;
    
    cin >> numero;
    
    for (int i = 0; i < numero; i++) {
        cin >> interruptor;
        
        if (A == 0) {
            A = 1;
        } else {
            A = 0;
        }

        if (interruptor == 2) {
            if (B == 0) {
                B = 1;
            } else {
                B = 0;
            }
        }
    }
    
    cout << A << endl << B << endl;
    return 0;
}
