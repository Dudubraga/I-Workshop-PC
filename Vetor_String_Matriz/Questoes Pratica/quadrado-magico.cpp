/*
    Quadrado mágico - Neps (https://neps.academy/br/exercise/236)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 14:27
*/


#include <bits/stdc++.h>

using namespace std;

int magic_square(int ** arr, int size){
    int sum_total = 0, sum = 0, sumdg2 = 0;
    for (int i = 0; i < size; i++){
        sum_total += arr[0][i];
    }

    for (int i = 1; i < size; i++){
        sum = 0;
        for (int j = 0; j < size; j++){
            sum += arr[i][j];
        }

        if (sum != sum_total){
            return -1;
        }
    }

    for (int i = 0; i < size; i++){
        sum = 0;
        for (int j = 0; j < size; j++){
            sum += arr[j][i];
        }

        if (sum != sum_total){
            return -1;
        }
    }
    sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i][i];
        sumdg2 += arr[i][size-1-i];
    }
    
    if (sum != sum_total || sumdg2 != sum_total){
        return -1;
    }
    return sum_total;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int **arr = (int **) malloc(n * sizeof(int **));
    
    for (int i = 0 ; i < n; i++){
        arr[i] = (int *) malloc(n * sizeof(int *));
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << magic_square(arr, n) << "\n";
    
    for (int i = 0 ; i < n; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}