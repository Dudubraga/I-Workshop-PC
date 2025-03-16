/*
Acima da Diagonal Principal - Beecrowd [https://judge.beecrowd.com/en/problems/view/1183]
Eduardo Braga
*/
#include <iostream>
using namespace std;

int main(){
    char Op; cin >> Op;
    float N, sum = 0, num = 0;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> N;
            if(i < j){ sum += N; num++; }
        }
    }

    if(Op == 'S'){ cout << sum << endl; }
    else{ cout << sum / num << endl; }

    return 0;
}
