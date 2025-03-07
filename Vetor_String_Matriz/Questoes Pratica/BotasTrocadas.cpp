#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int tc, total = 0;
  int esq[61]={0}, dir[61]={0};

  cin >> tc;

  while (tc--){
    int tam;
    char l;
    cin >> tam >> l;
    if (l == 'E'){
      esq[tam]++;
    }
    else{
      dir[tam]++;
    }
  }

  for (int i = 30; i <= 60; i++){
    if (esq[i] < dir[i]){
      total += esq[i];
    }
    else{
      total += dir[i];
    }
  }

  cout << total << "\n";
  return 0;
}
