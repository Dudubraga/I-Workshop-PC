/* 
Soft Drinking - Codeforces (https://codeforces.com/contest/151/problem/A)
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int friens, bottles, mil, limes, slices, salt, nl, np;
    cin>>friens>>bottles>>mil>>limes>>slices>>salt>>nl>>np;
 
    int toasts=0, nl1, np1, miltotal;
    toasts=(slices*limes)/friens;
    nl1=((mil*bottles)/nl)/friens;
    if (toasts>nl1){
        toasts=nl1;
    }
    np1=(salt/np)/friens;
    if (toasts>np1){
        toasts=np1;
    }
    cout<<toasts;
 
    return 0;
}
