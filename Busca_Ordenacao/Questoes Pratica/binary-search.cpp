/* 
Binary Search - SPOJ [https://www.spoj.com/problems/BSEARCH1/]
Eduardo Braga
*/
#include <bits/stdc++.h>
using namespace std;

vector<int>numbers;

int Verify(int key, int mid, int low){
    while(mid > low && key == numbers[mid-1]){
        mid--;
    }
    return mid;
} 

int BinSearch(int key, int high, int low){
    if(low > high || numbers[low] > key || numbers[high] < key){
        return -1;
    }
    while(low <= high){
        int mid = (high + low) / 2;
        if(numbers[mid] > key){
            high = mid - 1;
        }
        else if(numbers[mid] < key){
            low = mid + 1;
        }
        else{
            return Verify(key, mid, low);
        }
    }
    return -1;
}

int main(){
    int N, Q, key, a;
    scanf("%d %d", &N, &Q);
    for(int i = 0; i < N; i++){
        scanf("%d", &a);
        numbers.push_back(a);
    }
    int high = numbers.size()-1;
    int low = 0;
    for(int j = 0; j < Q; j++){
        scanf("%d", &key);
        printf("%d\n", BinSearch(key, high, low));
    }
    return 0;
}
