#include <bits/stdc++.h>

using namespace std;

int main(){
	int questions, correct = 0;
	char temp[80], candidate[80];
	cin >> questions;
	cin >> temp >> candidate;

	for (int i = 0; i < questions; i++){
		if (candidate[i] == temp[i]){
			correct++;
		}
	}
	
	cout << correct << "\n";
	return 0;
}
