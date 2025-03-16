/*
Criptografia - Beecrowd [https://judge.beecrowd.com/en/problems/view/1024]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int tam = s.length();

        for(int i = 0; i < tam; i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                s[i] += 3;
            }
        }

        for(int i = 0; i < tam/2; i++){
            char aux = s[i];
            s[i] = s[tam-1-i];
            s[tam-1-i] = aux;
        }

        for(int i = tam/2; i < tam; i++){
            s[i] -= 1;
        }
        cout << s << endl;
    }

    return 0;
}