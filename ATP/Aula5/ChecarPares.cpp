//Fa�a um algoritmo para verificar se todos os n�meros numa cole��o s�o pares. A cole��o tem 4 valores
//Cole��es

#include<iostream>
#include<cmath>
using namespace std;

main(){
	int i, n;
	bool par;
	par = true;
	i=0;
	
	while (i<4){
		cout << "Informe o valor numerico: ";
		cin >> n;
		if(n%2!=0){
			cout << "Nem todos sao pares!";
			par = false;
			break;
		}
		i++;
	}
	if(par==true){
		cout << "Todos os numeros sao pares!";
	}
}
