/* 
Nome da Questão - SPOJ (https://br.spoj.com/problems/F91/) 
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;
 
int f91(int n){
	int x;
	if (n>100){
		return n-10;
	}
	else{
		x=n+11;
		return f91(f91(x));
	}
}
 
int main() {
	
	int n, f;
	while(cin>>n && n!=0){
		f=f91(n);
		printf("f91(%d) = %d\n", n, f);
	}
 
	return 0;
} 
