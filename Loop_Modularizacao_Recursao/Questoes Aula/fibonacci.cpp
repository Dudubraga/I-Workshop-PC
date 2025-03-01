/* 
Fibonacci - Neps Academy (https://neps.academy/br/exercise/257)
Maria Luiza
*/
#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if (n==0 || n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}

int main(){    	

	int n, f;
	scanf("%d", &n);
	f=fib(n);
	printf("%d", f);
	
    return 0;
}
