/*
Watermelon - SPOJ [https://codeforces.com/contest/4/problem/A]
Eduardo Braga
*/
#include <iostream>
using namespace std;
 
int main(){
	int w; cin >> w;
    if(w % 2 == 0 && w != 2){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}