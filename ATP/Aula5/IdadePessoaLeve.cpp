//Faça um algoritmo para identificar a idade da pessoa mais leve numa coleção de dados sobre peso e idade. Encerre quando a idade informada for negativa.
//Máximo

#include<iostream>
#include<cmath>
using namespace std;

main(){
	int i, idade, peso, menor_peso, idade_menor_peso;
	menor_peso = 1000;
	i=0;
	while(i<5){
		cout << "Informe a idade: ";
		cin >> idade;
		if(idade < 0){
			break;
		}
		cout << "Informe o peso: ";
		cin >> peso;
		if(peso < menor_peso){
			menor_peso = peso;
			idade_menor_peso = idade;
		}
		i++;
	}
	cout << "A pessoa mais leve da lista tem " << idade_menor_peso << " anos.";
}
