#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, N[1000];

    scanf("%d", &t);

    for (int i = 0; i < 1000; i++){
        N[i] = i % t;
    }

    for (int i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}