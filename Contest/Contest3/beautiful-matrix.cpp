/*
Beautiful Matrix - Codeforces [https://codeforces.com/problemset/problem/263/A]
Maria Luiza
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int matriz[5][5];

    int i1, j1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matriz[i][j];
            if(matriz[i][j]==1){
                i1=i+1;
                j1=j+1;
            }
        }
    }

    int novoi=abs(3-i1);
    int novoj=abs(3-j1);

    cout<<novoi+novoj<<endl;

    return 0;
}