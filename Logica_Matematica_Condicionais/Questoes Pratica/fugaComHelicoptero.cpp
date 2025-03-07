/* 
Nome da Questão: Fuga com helicóptero NEPS ACADEMY: https://neps.academy/br/exercise/5
Nome de quem resolveu: Isabela Medeiros
*/


#include <iostream>
using namespace std;

int main() {
    int helicoptero, policia, fugitivo, direcao;
    cin >> helicoptero >> policia >> fugitivo >> direcao;

    int posic = fugitivo;

    for (int i = 0; i < 16; i++) {
        if (direcao == 1) {
            posic++;
            if (posic == 16) {
                posic = 0;
            }
        } else {
            posic--;
            if (posic == -1) {
                posic = 15;
            }
        }

        if (posic == helicoptero) {
            cout << 'S';
            break;
        }
        if (posic == policia) {
            cout << 'N';
            break;
        }
    }

    return 0;
}
