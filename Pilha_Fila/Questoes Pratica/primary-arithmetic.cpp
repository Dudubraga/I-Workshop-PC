/* 
Primary Arithmetic - UVA (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=33&page=show_problem&problem=976)
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    string n1,n2;
    while(cin>>n1>>n2 && (n1!="0" || n2!="0")){
        int carry=0, resto=0;
        int i=n1.size()-1, j=n2.size()-1;

        while(i>=0 || j>=0){
            int soma=0;
            if(i>=0){
                soma+=(n1[i]-'0');
            }
            if(j>=0){
                soma+=(n2[j]-'0');
            }

            soma+=resto;
            if(soma>9){
                carry++;
            }
            resto=soma/10;

            j--;i--;
        }

        if(carry==0){
            printf("No carry operation.\n");
        }else if(carry==1){
            printf("1 carry operation.\n");
        }else{
            printf("%d carry operations.\n",carry);
        }

    }

    return 0;
}
