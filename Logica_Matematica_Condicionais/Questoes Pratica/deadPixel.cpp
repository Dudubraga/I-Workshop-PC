/* 
Nome da Questão: Dead Pixel CODE FORCES: https://codeforces.com/contest/1315/problem/A
Nome de quem resolveu: Isabela Medeiros
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    long long int a, b, x, y;
    cin >> testcase;
    for (int i = 0; i < testcase; ++i) {
        cin >> a >> b >> x >> y;
 
        long long int ans1 = a * y;
        long long int ans2 = b * x;
        long long int ans3 = (a - 1 - x) * b;
        long long int ans4 = a * (b - 1 - y);
        
        long long int temp = ans1;
        if (ans2 > temp) temp = ans2;
        if (ans3 > temp) temp = ans3;
        if (ans4 > temp) temp = ans4;
        
        cout << temp << endl;
    }
 
    return 0;
}