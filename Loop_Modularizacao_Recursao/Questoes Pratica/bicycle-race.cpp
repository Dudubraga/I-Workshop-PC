/* 
Bicycle Race - Codeforces (https://codeforces.com/problemset/problem/659/D)
Maria Luiza
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    //1=^ 2=< 3=v 4=>
 
    int n,x,y,ax,ay,turns=0,di=1;
    scanf("%d %d %d %d %d",&n,&ax,&ay,&x,&y);
 
    for(int i=1;i<n;i++){
        ax=x;ay=y;
        scanf("%d %d",&x,&y);
        if(di==1){ //1=^ 2=< 3=v 4=>
            if(x<ax){
                turns++;
                di=2;
            }
            else{
                di=4;
            }
        }
        else if(di==2){ //1=^ 2=< 3=v 4=>
            if(y<ay){
            turns++;
            di=3;
                
            }else{
            di=1;
            }
        }
        else if(di==3){ //1=^ 2=< 3=v 4=>
            if(x>ax){
            turns++;
            di=4;
                
            }
            else{
            di=2;
            }
        }
        else if(di==4){ //1=^ 2=< 3=v 4=>
            if(y>ay){
            turns++;
            di=1;
                
            }else{
            di=3;
            }
        }
    }
 
    if(n==4){printf("0\n");}else{
    printf("%d\n",turns);}
    
    return 0;
}
