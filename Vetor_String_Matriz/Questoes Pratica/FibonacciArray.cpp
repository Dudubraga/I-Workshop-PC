#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long fib[61] = {0, 1};

    for (int i = 2; i < 61; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    int tc, term;

    scanf("%d", &tc);

    while (tc--){
        scanf("%d", &term);

        printf("Fib(%d) = %llu\n", term, fib[term]);
    }

    return 0;
}