/*
    Kefa and the first steps - Codeforces (https://codeforces.com/problemset/problem/580/A)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 14:26
*/

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int quant, max = 1; 
  cin >> quant;
  vector <int> vi(quant);
 
  for (int i = 0; i < quant; i++){
    cin >> vi[i];
  }
 
  int total = 1;
 
  for(int i = 1; i < quant; i++){
    
    if (vi[i] >= vi[i-1]){
      total++;    
    }
    else{
      total = 1;
    }
    max = total > max ? total:max;
  }
 
  cout << max << "\n";
  return 0;
}