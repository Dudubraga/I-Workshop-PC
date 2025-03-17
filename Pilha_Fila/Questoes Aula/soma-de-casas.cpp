/*
    Soma de Casas - NEPS (https://neps.academy/br/exercise/255)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 16:41
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int tc;
  cin >> tc;
  long int sum;
  vector <long int> vlu(tc);
  
  for (int i = 0; i < tc; i++){
    cin >> vlu[i];
  }
  cin >> sum;
  int a = 0, b = tc-1;

  while (a <= b){
    if (vlu[a]+ vlu[b] < sum){
      a++;
    }
    else if (vlu[a]+vlu[b] > sum){
      b--;
    }
    else{
      break;
    }
  }

  printf("%ld %ld", vlu[a], vlu[b]);
}
