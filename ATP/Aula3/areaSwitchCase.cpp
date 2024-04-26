#include<iostream>
#include<cmath>
using namespace std;
main(){
	char figura;
	float dim1, dim2, area;
	cout << "Informe a figura: " << endl << "C - Circulo | T - Triangulo | Q - Quadrado" << endl;
	cin >> figura;
	switch(figura){
		case 'C':
			cout << "Digite o Raio: ";
			cin >> dim1;  //Raio
			area = 3.14*(dim1*dim1);
			cout << "A area vale " << area;
			break;
		case 'T':
			cout << "Digite o valor da base: ";
			cin >> dim1; //Base 
			cout << "Digite o valor da altura: ";
			cin >> dim2; //Altura 
			area = (dim1*dim2)/2;
			cout << "A area vale " << area;
			break;
		case 'Q':
			cout << "Digite o valor do lado: ";
			cin >> dim1; //Lado
			area = (dim1*dim1);
			cout << "A area vale: " << area;
			break;
		default: 
			cout << "Opcao invalida!";
			break;
	}
	
}
