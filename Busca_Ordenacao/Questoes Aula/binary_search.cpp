#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n; cin>>n;
    vector <int> v;
    for (int i=0; i<n; i++){
        int num; cin >>num;
        v.push_back (num);
    }
    int value; cin>>value;
    int low =0;
    int high= n-1;
    int mid=(low+high)/2;
    int key=-1;
    while (low<=high){
        if (v[mid]>value){
            high = mid-1;
        }
        else if (v[mid]<value){
            low = mid+1;
        }
        else if (v[mid] == value){
            key = mid;
            break;
        }
        mid = (low+high)/2;
    }
    cout << key <<endl;
}