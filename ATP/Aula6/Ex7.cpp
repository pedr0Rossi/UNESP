//7) Faça um algoritmos que recebe dois números e gera a sequência crescente de números ímpares entre eles. O segundo número deve ser sempre maior que o primeiro.

#include<iostream>
#include<cmath>

using namespace std;

main(){
	int n1, n2; //n1 para limite inicial e n2 para limite final
	
	cout << "Informe o limite inferior: ";
	cin >> n1;
	cout << "Informe o limite superior: ";
	cin >> n2;
	
	if(n1 < n2){
		if(n1%2==0){
			n1++;
			cout << n1 << endl;
			while (n1 + 1 < n2) {
				n1 += 2;
				cout << n1 << endl;	
			}
		} else{
			while (n1 + 1 < n2) {
				n1 += 2;
				cout << n1 << endl;	
			}
		}	
	}else{
		cout << "Erro: o segundo numero deve ser maior do que o primeiro";
	}
	
}
