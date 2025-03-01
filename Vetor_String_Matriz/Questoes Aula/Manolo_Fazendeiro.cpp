#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, total = 0;
    scanf("%d", &n);
    int arr[n+1][n+1];

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &q);

    while (q--){
        int li, ci, lf, cf;
        scanf("%d %d %d %d", &li, &ci, &lf, &cf);
        
        for (int i = li; i <= lf; i++){
            for (int j = ci; j <= cf; j++){
                total += arr[i][j];
                arr[i][j] = 0;
            }
        }
    }

    printf("%d\n", total);
    return 0;
}