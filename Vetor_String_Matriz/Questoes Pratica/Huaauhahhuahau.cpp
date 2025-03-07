#include <bits/stdc++.h>
using namespace std;

char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

bool is_vowel(char a){
    for (int i = 0; i < 5; i++){
        if (a == vowel[i]){
            return true;
        }
    }
    return false;
}

string only_vowel(string a){
    string v;
    
    for (int i = 0; i < a.size(); i++){
        if (is_vowel(a[i])){
            v.push_back(a[i]);
        }
    }
    
    return v;
}

string reverse(string a){
    string r;
    
    for (int i = 0; i < a.size(); i++){
        r += a[a.size()-1-i];
    }
    
    return r;
}

int main(){
    string t, vowel, rvowel;
    
    getline(cin, t);
    
    vowel = only_vowel(t);
    rvowel = reverse(vowel);
    
    for (int i = 0; i < vowel.size(); i++){
        if (vowel[i] != rvowel[i]){
            printf("N\n");
            return 0;
        }
    }
    
    printf("S\n");
    return 0;
}
