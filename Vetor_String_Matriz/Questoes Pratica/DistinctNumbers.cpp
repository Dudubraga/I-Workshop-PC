/*
    Distinct Numbers - CSES (https://cses.fi/problemset/task/1621)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 14:25
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, temp;

    scanf("%d", &size);

    set<int> Numbers;

    for(int i = 0; i < size; i++){
        scanf("%d", &temp);
        Numbers.insert(temp);
    }

    printf("%d\n", Numbers.size());
    return 0;
}