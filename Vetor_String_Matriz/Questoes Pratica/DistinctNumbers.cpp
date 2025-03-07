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