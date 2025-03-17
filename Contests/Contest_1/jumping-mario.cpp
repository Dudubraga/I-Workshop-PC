/*
Junmping Mario - UVA [https://onlinejudge.org/external/117/11764.pdf]
Eduardo Braga
*/
#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    int caso, N, altura1, altura2;
    
    for(caso = 1; caso <= T; caso++) {
        cin >> N;
        cin >> altura1;
        int alto = 0, baixo = 0;
    
        for(int j = 1; j < N; j++) {
            scanf("%d", &altura2);
            if(altura1 < altura2) {
                alto++;
            }
            if(altura1 > altura2) {
                baixo++;
            }
            altura1 = altura2;
        }
    
        cout << "Case " << caso << ": " << alto << " " << baixo << endl;
    }
    
    return 0;
}