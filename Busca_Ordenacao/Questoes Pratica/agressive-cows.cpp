/* 
Agressive Cows - SPOJ [https://www.spoj.com/problems/AGGRCOW/]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

vector<int>stalls;

bool verify(int mid, int C){
    int count = 1, pos = stalls[0];
    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - pos >= mid){
            count++;
            pos = stalls[i];
        }
    }
    if(count >= C){ return true; }
    else{ return false; }
}

int binSearch(int N, int C){
    int high = stalls[N-1] - stalls[0];
    int low = 1, mid, ans = 0;
    while(low <= high){
        mid = (high + low) / 2;
        if(verify(mid, C)){
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int t, N, C, x;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> N >> C;
        for(int j = 0; j < N; j++){
            cin >> x;
            stalls.push_back(x);
        }
        sort(stalls.begin(), stalls.end());

        cout << binSearch(N, C) << endl;
        stalls.clear();
    }

    return 0;
}