#include<iostream>
#include<cmath>
using namespace std;
main(){
	int inicioFixo, inicio, fim, media, soma, qtde;
	inicio = 30;
	inicioFixo = inicio;
	fim = 60;
	while (inicio <= fim){
		if(inicio%3==0){ //divisivel por 3
			soma += inicio;
			qtde += 1;
		}		
		inicio += 1;
	}
	media = soma/qtde;
	cout << "A media entre os multiplos de 3 contidos entre " << inicioFixo << " e " << fim << " vale " << media;
}
