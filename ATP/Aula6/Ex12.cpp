#include<iostream>
#include<cmath>
using namespace std;

main(){
	int i, qtde, n1, n2, valor;
	bool definicao;
	
	i=0;
	definicao = true;
	cout << "Digite a quantidade de pares: ";
	cin >> qtde;
	
	while (i<qtde){
		cout << "Digite o 1o valor: ";
		cin >> n1;
		cout << "Digite o 2o valor: ";
		cin >> n2;
		if(n1+1 != n2){
			definicao = false;
		}
		i++;
	}
	if(definicao){
		cout << "A relacao atende ao criterio de que todos elementos sao da forma (n, n+1)";
	}else{
		cout << "A relacao nao atende ao criterio de que todos elementos sao da forma (n, n+1)";
	}
}
