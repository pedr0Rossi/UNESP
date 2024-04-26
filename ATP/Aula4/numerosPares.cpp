#include<iostream>
#include<cmath>
using namespace std;
main(){
	int inicio, fim;
	cout << "Informe o valor inicial: " << endl;
	cin >> inicio;
	cout << "Informe o valor final: " << endl;
	cin >> fim;
	if(inicio%2==1){ //impar
		inicio = inicio + 1;
		while(inicio <= fim){
			cout << inicio;
			inicio = inicio + 2;
		}
	}	else{ //par
		while(inicio <= fim){
			cout << inicio << endl;
			inicio = inicio + 2;
		}
	}
}

//Clicando com o botao esquerdo em alguma linha de código, cria-se um "ponto de parada"
//Tools > Compiler Options > adicionar um -g em ambos os espaços
//F5 para fazer o debug
