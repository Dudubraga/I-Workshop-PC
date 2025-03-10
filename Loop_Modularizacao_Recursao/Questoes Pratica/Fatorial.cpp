/*
Fatorial - Neps Academy (https://neps.academy/br/exercise/158)
Maria Luiza
*/
#include<iostream>
using namespace std;

typedef long long ll;

int main(){

    ll n, f=1;
    cin>>n;
    for(int i=n;i>1;i--){
        f*=i;
    }

    cout<<f<<endl;
    
    return 0;
}
