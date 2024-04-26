#include<iostream>
#include<cmath>
using namespace std;
main(){
	int i, j, idade, qtdTotal, qtdH, somaIdadeH, somaIdadeTotal, media;
	char sexo;
	qtdTotal = 0;
	i=1;
	j=5;
	while (i<=j){
		cout << "Digite o sexo (H - HOMEM || M - MULHER): ";
		cin >> sexo;
		if(sexo = 'H'){
			qtdTotal++;
			qtdH++;
			cout << "Digite a idade: ";
			cin >> idade;
			somaIdadeTotal += idade;
			somaIdadeH += idade;
		}else{
			qtdTotal++;
			cout << "Digite a idade: ";
			cin >> idade;
			somaIdadeTotal += idade;
		}
		i++;
	}
	media = somaIdadeTotal / qtdTotal;
	cout << "A media das idades vale " << media << endl;
	cout << "A soma das idades dos homens vale " << somaIdadeH;
}
