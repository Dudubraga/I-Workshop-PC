/*
Automatic Answer - UVA
Maria Luiza
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        
        n*=(567/9);
        n+=7492;
        n*=(235/47);
        n-=498;
        
        n/=10;
        printf("%d\n",abs(n%10));
        
    }

    return 0;
}
