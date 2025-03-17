/*
How Many Knights - UVA [https://onlinejudge.org/external/6/696.pdf]
Eduardo Braga
*/
#include <iostream>
using namespace std;

int main(){
    int colunas, linhas, cavalos;
    while(true){
        cin >> linhas >> colunas;
        if(colunas == 0 || linhas == 0){
            break;
        }
        
	    int tabuleiro = colunas * linhas;
        if(colunas == 1 || linhas == 1){ 
            cavalos = tabuleiro; 
        }
        else if(colunas == 2 || linhas == 2){
            int aux = max(colunas, linhas);
    		cavalos = 4;
	    	for(int j = 3; j < aux; j++){
		    	if(j % 4 == 0 || j % 4 == 1){
    				cavalos += 2;
            	}
            }
        } else {
            if(tabuleiro % 2 == 0){
                cavalos = tabuleiro / 2;
            } else {
                cavalos = (tabuleiro + 1) / 2; 
            }
	    }

        cout << cavalos << " knights may be placed on a " << linhas << " row " << colunas << " column board." << endl;
    }
 
    return 0;   
}
