#include <iostream>

using namespace std;

main(){
	float h, c1, c2;
	
	cout << "Informe o valor do primeiro lado";
	cin >> h;
	cout << "Informe o valor do segundo lado";
	cin >> c1;
	cout << "Informe o valor do terceiro lado";
	cin >> c2;
	
	if(h*h == c1*c1 + c2*c2){
		cout << "O Triangulo eh retangulo" << endl;
		cout << endl << h*h;
		cout << endl << c1*c1 + c2*c2;
	}else{
		cout << "O Triangulo nao eh retangulo";
		cout << endl << h*h;
		cout << endl << c1*c1 + c2*c2;
	}
}
