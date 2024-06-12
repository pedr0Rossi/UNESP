#include<iostream>
#define MAX_SPACE 100
using namespace std;

main(){
	int n, n2, valor, posicao, nova_posicao;
	int valores[MAX_SPACE];
	bool existe;
	existe = false;
	posicao = 0;
	nova_posicao = 0;
	n2 = 0;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		existe = false;
		cin >> valor;
		for(int j=0; j<n2; j++){
			if(valor == valores[j]){
				existe = true;
			}
		}
		if(existe){
			cout << "Insira um numero que ainda nao existe" << endl;
			i--;
		}else{
			valores[i] = valor;
			n2++;
		}
	}
	
	while(true){
		cout << nova_posicao << endl;
		nova_posicao = valores[posicao];
		posicao = nova_posicao;
		if(valores[nova_posicao] == 0){
			cout << nova_posicao << endl;
			break;
		}
	}
}
