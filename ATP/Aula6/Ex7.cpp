//7) Fa�a um algoritmos que recebe dois n�meros e gera a sequ�ncia crescente de n�meros �mpares entre eles. O segundo n�mero deve ser sempre maior que o primeiro.

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
