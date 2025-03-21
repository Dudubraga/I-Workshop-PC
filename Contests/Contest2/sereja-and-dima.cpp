/*
Sereja and Dima - CodeForces [https://codeforces.com/problemset/problem/381/A]
Eduardo Braga
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, c; cin >> N;
    vector<int>cards;
    for(int i = 0; i < N; i++){
        cin >> c;
        cards.push_back(c);
    }
    
    int turn = 0, start = 0, end = N-1;
    int sereja = 0, dima = 0;
    
    while(start <= end){
        if(cards[start] > cards[end]){
            if(turn == 0){
                sereja += cards[start];
                turn++;
            } else {
                dima += cards[start];
                turn--;
            }
            start++;
        } else {
            if(turn == 0){
                sereja += cards[end];
                turn++;
            } else {
                dima += cards[end];
                turn--;
            }
            end--;
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}