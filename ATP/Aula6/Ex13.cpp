//13) Faça um algoritmo que recebe uma sequência de números inteiros e decide se a sequência é sempre ascendente, isto é, cada número é menor que o número seguinte.
#include<iostream>
#include<cmath>
using namespace std;

main(){
	int nAnterior, n, i, qtde;
	bool ascendente;
	
	i=1;
	ascendente = true;
	cout << "Informe o tamanho da sequencia: ";
	cin >> qtde;
	cout << "Informe o proximo elemento: ";
	cin >> nAnterior;
		
	while (i<qtde){
		cout << "Informe o proximo elemento: ";
		cin >> n;
		if (n<=nAnterior){
			ascendente = false;
		}else{
			nAnterior = n;
		}
		i++;
	}
	if(ascendente){
		cout << "A sequencia eh ascendente.";
	}else{
		cout << "A sequencia nao eh ascendente.";
	}
}
