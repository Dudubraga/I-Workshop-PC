/*
CME - CodeForces [https://codeforces.com/contest/1241/problem/A]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, n; 
    cin >> q;
    while(q--){
        cin >> n;
        if(n == 2){
            cout << 2 << endl;
        }
        else if(n % 2 != 0){
            cout << 1 << endl;
        } else{ 
            cout << 0 << endl;
        }
    }

    return 0;
}

/* 1241A - CME
https://codeforces.com/contest/1241/problem/A */