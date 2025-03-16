/*
Frequência de Letras - Beecrowd [https://judge.beecrowd.com/en/problems/view/1255]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string msg;
        getline(cin, msg);
        int freq[26] = {0};

        for(int i = 0; i < msg.length(); i++){
            if(msg[i] >= 'a' && msg[i] <= 'z'){
                freq[msg[i] - 'a']++;
            }
            if(msg[i] >= 'A' && msg[i] <= 'Z'){
                freq[msg[i] - 'A']++;
            }
        }

        int max = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] > max){
                max = freq[i];
            }
        }
        for(int i = 0; i < 26; i++){
            if(freq[i] == max){
                printf("%c", i + 'a');
            }
        } cout << endl;    
    }
    
    return 0;
}
