/* 
Fast Primo - Beecrowd (https://judge.beecrowd.com/pt/problems/view/1221)
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;

map<long long, bool> primo;

void calcular(long long num){
    if(num <2 || num%2==0){
        return;
    }

    for(long long i=3;i*i<num;i+=2){
        if(num%i==0){
            return;
        }
    }

    primo[num]=true;

}

int main(){

    primo[2]=true;

    int t;
    scanf("%d",&t);
    while(t--){
        long long num;
        cin>>num;
        if(primo.find(num)==primo.end()){
            calcular(num);
        }
        if(num<2 || primo.find(num)!=primo.end()){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }

    return 0;
}
