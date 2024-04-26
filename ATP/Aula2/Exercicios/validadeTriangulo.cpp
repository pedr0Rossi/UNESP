#include <iostream>
using namespace std;

main(){
	float a, b, c;
	cout << "Digite o valor dos 3 lados do triângulo" << endl;
	cin >> a >> b >> c;
	if(a < b + c){
		if (b < a + c){
			if (c < a + b){
				cout << "Triangulo valido";
			}else{
				cout << "Triangulo invalido";
			}
		}else{
			cout << "Triangulo invalido";
		}
	}else{
		cout << "Triangulo invalido";
	}
}
