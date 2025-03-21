/*
Suffix Three - CodeForces [https://codeforces.com/problemset/problem/1281/A]
Eduardo Braga
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    string name;
    string nacionality;
    for(int i = 0; i < t; i++){
        cin >> name;
        if(name.back() == 'o'){
            nacionality = "FILIPINO";
        } 
        if(name.back() == 'u'){
            nacionality = "JAPANESE";
        } 
        if(name.back() == 'a'){
            nacionality = "KOREAN";
        }
        cout << nacionality << endl;
    }

    return 0;
}