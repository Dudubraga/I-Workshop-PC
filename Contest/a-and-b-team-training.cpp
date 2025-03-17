/*
A and B Team Training - CodeForces [https://codeforces.com/problemset/problem/519/C]
Eduardo Braga
*/
#include <iostream>
using namespace std;

int main(){
    int xp, nb, grupos = 0;
    cin >> xp >> nb;

    while(xp + nb >= 3 && nb > 0 && xp > 0){
        if(xp > nb){
            xp -= 2;
            nb -=1;
            grupos++;
        } else {
            xp -= 1;
            nb -= 2;
            grupos++;
        }
    }

    cout << grupos;

    return 0;
}