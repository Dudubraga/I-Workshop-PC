/* 
Ordenação Simples - Neps Academy [https://neps.academy/br/exercise/176]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, a; cin >> N;
    vector<int>sequence;
    for(int i = 0; i < N; i++){
        cin >> a;
        sequence.push_back(a); 
    }
    sort(sequence.begin(), sequence.end());
    
    for(int j = 0; j < N; j++){
        cout << sequence[j] << " ";
    } cout << endl;

    return 0;
}