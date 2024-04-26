//Faça um algoritmo para verificar se todos os números numa coleção são pares. A coleção tem 4 valores
//Coleções

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
