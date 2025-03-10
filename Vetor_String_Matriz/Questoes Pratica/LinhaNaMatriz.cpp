/*
Linha na Matriz - Beecrowd (https://judge.beecrowd.com/pt/problems/view/1181)
Maria Luiza
*/
#include<iostream>
using namespace std;

int main(){
    
    int linha;
    double m[12][12];
    char operacao;
    cin>>linha;
    cin>>operacao;
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>m[i][j];
        }
    }
    
    
    double soma=0;
    for(int i=0;i<12;i++){
        soma+=m[linha][i];
    }
    
    if(operacao=='S'){
        printf("%.1lf\n",soma);
    }else{
        printf("%.1lf\n",soma/12);
    }
    
    return 0;
}
