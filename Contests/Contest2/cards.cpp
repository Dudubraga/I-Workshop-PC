/*
Cards - CodeForces [https://codeforces.com/problemset/problem/1220/A]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int length; cin >> length;
    int one = 0, zero = 0;

    for(int i = 0; i < length; i++){
        char letra; cin >> letra;
        if(letra == 'z'){
            zero++;
        }
        if(letra == 'n'){
            one++;
        }
    }

    for(int i = 0; i < one; i++){
        cout << "1 ";
    }
    for (int i = 0; i < zero; i++){
        cout << "0 ";
    } 
    cout << endl;
    
    return 0;
}