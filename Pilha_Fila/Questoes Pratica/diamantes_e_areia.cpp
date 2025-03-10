#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _ 
    int n;
    cin >> n;

    while (n--) {
        string s;
        vector<char> v;

        cin >> s;

        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '<') {
                v.push_back(s[i]);
            } else if (!v.empty() && s[i] == '>') {
                v.pop_back();
                ans++;
            }
        }

        cout << ans << endl;
    }

    exit(0);
}