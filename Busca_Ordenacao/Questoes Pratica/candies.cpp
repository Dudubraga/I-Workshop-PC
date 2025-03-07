/* 
Binary search - CodeForces [https://codeforces.com/contest/991/problem/C]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll game(ll candies, ll k){
    ll vasya = k;
    candies -= k;
    while(candies >= 10){
        candies -= (candies / 10);
        candies -= k;
        vasya += k;
    }
    return vasya + candies;
}

ll search(ll n){
    ll low = 1, high = n, min = n+1;
    ll half = n / 2;
    if(n % 2 != 0){ half++; }
    while(low <= high){
        ll mid = (low + high) / 2;
        if(game(n, mid) >= half){
            if(mid < min){ min = mid; }
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return min;
}

int main(){
    ll N; cin >> N;
    if(N < 10){ cout << 1 << endl; }
    else{ cout << search(N) << endl; }

    return 0;
}