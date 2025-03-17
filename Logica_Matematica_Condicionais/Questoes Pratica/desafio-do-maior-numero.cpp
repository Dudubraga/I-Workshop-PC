/*
Desafio do Maior Número - Neps Academy (https://neps.academy/br/exercise/323)
Maria Luiza Ribeiro
*/
#include <iostream>
using namespace std;

int main(){

	int n;
	int maior=0;
	cin>>n;
	while (n!=0){
		if (n>maior){
			maior=n;
		}
		cin>>n;
	}
	cout<<maior;
	
	return 0;
}
