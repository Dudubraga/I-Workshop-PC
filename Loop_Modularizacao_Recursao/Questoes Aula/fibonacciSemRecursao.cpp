/*
Fibonacci (For Loop) - Neps Academy (https://neps.academy/br/exercise/257)
Júlia
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << 1 << endl;
    } else {
        int ant1 = 1, ant2 = 1;
        int proximo;

        for (int i = 2; i <= n; i++) {
            proximo = ant1 + ant2;
            ant2 = ant1;
            ant1 = proximo;
        }
        cout << proximo << endl; 
    }

    return 0;
}