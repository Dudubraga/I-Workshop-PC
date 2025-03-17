/* 
Three Strings - Codeforces (https://codeforces.com/problemset/problem/1301/A)
Júlia
*/
#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() { _
    int t;
    cin >> t;

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        int sz = a.size();
        bool flg = true;
        for (int i = 0; i < sz; i++) {
            if (c[i] != a[i] && c[i] != b[i]) {
                cout << "NO" << endl;
                flg = false;
                break;
            }
        }
        if (flg) {
            cout << "YES" << endl;
        }
    }

    exit(0);
}