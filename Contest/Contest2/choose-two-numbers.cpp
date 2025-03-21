/*
Choose Two Numbers - CodeForces [https://codeforces.com/problemset/problem/1206/A]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    int x, maxA = -1e9, maxB = -1e9;
    while(a--){
        cin >> x;
        maxA = max(x, maxA);
    }
    cin >> b;
    while(b--){
        cin >> x;
        maxB = max(x, maxB);
    }
    cout << maxA << " " << maxB << endl;

    return 0;
}