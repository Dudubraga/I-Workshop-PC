/*
Missing Number - CSES [https://cses.fi/problemset/task/1083]
Júlia Vilela
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> v(n+1);

    for (int i = 1; i < n; i++) {
        cin >> num;
        v[num] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}