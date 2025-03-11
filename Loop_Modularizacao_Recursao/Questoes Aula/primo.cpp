/*
Primo - SPOJ (https://br.spoj.com/problems/PRIMO/)
Júlia
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool ehPrimo = true;

    if (n == 1 || n == 0) {
        ehPrimo = true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ehPrimo = false;
            break;
        }
    }
 
    if (ehPrimo) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }

    return 0;
}