/* 
Jogando Cartas Fora - Beecrowd (https://judge.beecrowd.com/pt/problems/view/1110)
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    map<int, pair<int,vector<int> > > m;
    while(scanf("%d",&n) && n!=0){
        
        vector<int> discarded,cards;
        bool existe=false;
        if(m.find(n)!=m.end()){
            discarded=m[n].second;
            cards.push_back(m[n].first);
            existe=true;
        }
        
        for(int i=n;i>0 && !existe;i--){
            cards.push_back(i);
        }
        
        bool action=true;
        while(cards.size()>1 && !existe){
            int x=cards.back();
            if(action){ //discard
                discarded.push_back(x);
            }else{ //add to back
                cards.insert(cards.begin(), x);
            }
            cards.pop_back();
            action=!action;
        }
        
        if(!existe){
            m[n]=make_pair(cards[0],discarded);
        }
        
        printf("Discarded cards: ");
        for(int i=0;i<n-1;i++){
            if(i==0){
                printf("%d",discarded[0]);
                continue;
            }
            
            printf(", %d",discarded[i]);
            
        }
        printf("\nRemaining card: %d\n",cards[0]);
        
    }
    
    return 0;
}
