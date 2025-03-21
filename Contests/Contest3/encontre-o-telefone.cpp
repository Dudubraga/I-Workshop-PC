/*
Encontre o Telefone - SPOJ [https://br.spoj.com/problems/ENCOTEL/]
Isabela Medeiros
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string palavra;
    while(cin >> palavra){
        int size = palavra.size();
        for(int i = 0; i< size; i++){
            if(palavra[i] == 'A' || palavra[i] == 'B' || palavra[i] == 'C'){
                cout << 2;
            }else if(palavra[i] == 'D' || palavra[i] == 'E' || palavra[i] == 'F'){
                cout << 3;
            }else if(palavra[i] == 'G' || palavra[i] == 'H' || palavra[i] == 'I'){
                cout << 4;
            }else if(palavra[i] == 'J' || palavra[i] == 'K' || palavra[i] == 'L'){
                cout << 5;
            }else if(palavra[i] == 'M' || palavra[i] == 'N' || palavra[i] == 'O'){
                cout << 6;
            }else if(palavra[i] == 'P' || palavra[i] == 'Q' || palavra[i] == 'R' || palavra[i] == 'S'){
                cout << 7;
            }else if(palavra[i] == 'T' || palavra[i] == 'U' || palavra[i] == 'V'){
                cout << 8;
            }else if(palavra[i] == 'W' || palavra[i] == 'X' || palavra[i] == 'Y' || palavra[i] == 'Z'){
                cout << 9;
            }else{
                cout << palavra[i];
            }
        }
        cout << endl;
    }
    return 0;
}