/*
    Expressões - NEPS (https://neps.academy/br/exercise/271)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 16:41
*/

#include <bits/stdc++.h>
#define n 3
using namespace std;
char closed[n] = {')', ']', '}'};
char open[n] = {'(', '[', '{'};
int is_open(char c){
	for (int i = 0; i < n; i++){
		if (c == open[i]){
			return 1;
		}
	}

	return 0;
}

char get_open(char c){
	for (int i = 0; i < n; i++){
		if (c == closed[i]){
			return open[i];
		}
	}
	return ' ';
}
int verify(string t){
	string v;
	char a, c, expect;
	for (int i = 0; i < t.size(); i++){
		c = t[i];
		if (is_open(c)){
			v.push_back(c);
		}
		else if (v.size() == 0){
			return 0;
		}
		else{
			expect = get_open(c);
			a = v[v.size()-1];

			if (a != expect){
				return 0;
			}
			v.pop_back();
		}
	}

	return (v.size() == 0);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc;
	string s;
	cin >> tc;

	while(tc--){
		cin >> s;

		if (verify(s)){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
}
