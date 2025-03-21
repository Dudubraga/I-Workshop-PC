/*
Aggressive Cows - SPOJ [https://www.spoj.com/problems/AGGRCOW/]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

bool verificacao(vector<int>estabulos, int mid, int vacas){
    int contador = 1; 
    int pos = estabulos[0];
    for(int i = 1; i < estabulos.size(); i++){
        if(estabulos[i] - pos >= mid){
            contador++;
            pos = estabulos[i];
        }
    }
    if(contador >= vacas){
        return true;
    }
    return false;
}

int buscaBinaria(vector<int>estabulos, int N, int vacas){
    int high = estabulos[N-1] - estabulos[0];
    int low = 1, mid = 0, distancia = 0;
    while(low <= high){
        mid = (high + low) / 2;
        if(verificacao(estabulos, mid, vacas)){
            distancia = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return distancia;
}

int main(){
    int t; cin >> t;
    int N, C, x;
    for(int i = 0; i < t; i++){
        cin >> N >> C;
        vector<int>estabulos;
        for(int j = 0; j < N; j++){
            cin >> x;
            estabulos.push_back(x);
        }
        sort(estabulos.begin(), estabulos.end());
        int resposta = buscaBinaria(estabulos, N, C);
        cout << resposta << endl;
    }

    return 0;
}
