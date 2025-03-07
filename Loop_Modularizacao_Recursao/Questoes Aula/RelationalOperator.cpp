/*
Relational Operator - UVA (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113)
Maria Luiza
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }

    return 0;
}
