/*
    Street Parade(STPAR) - SPOJ (https://www.spoj.com/problems/STPAR/)
    
    Nome de quem Resolveu: Victor Hugo

    Ultima alteração: 07/03/2025 16:39
*/

#include <bits/stdc++.h>

using namespace std;

bool verify(vector<int> arr, vector<int> sorted){
    vector<int> no;
    int popIdx = 0;
    int pushIdx = 0;
    no.push_back(arr[pushIdx++]);

    while (popIdx < arr.size()){
        while (no[no.size()-1] != sorted[popIdx] && pushIdx < arr.size()){
            no.push_back(arr[pushIdx++]);
        }

        if (no[no.size()-1] == sorted[popIdx]){
            no.pop_back();
            popIdx++;
        }
        else{
            return 0;
        }
    }

    return no.empty();
}
int main(){
    int size;

    scanf("%d", &size);

    while (size != 0){
        vector<int> arr(size), sorted(size);

        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
            sorted[i] = arr[i];
        }

        sort(sorted.begin(), sorted.end());

        if (verify(arr,sorted)){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        scanf("%d", &size);
    }
}