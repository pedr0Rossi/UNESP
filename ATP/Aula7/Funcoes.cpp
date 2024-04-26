#include<iostream>
#include<cmath>
using namespace std;

//Void eh um procedimento, pois nao tem valor de retorno, eh apenas uma acao unica
void imprimir_conteudo(){
	cout << "impressao";
}
int valor(float n){
	float absN;
	absN = abs(n);
	return absN;
}
main(){
	float x, y, z, absX, absY, absZ;
	cout << "Digite o primeiro valor: ";
	cin >> x;
	absX = valor(x);
	cout << "Digite o segundo valor: ";
	cin >> y;
	absY = valor(y);
	cout << "Digite o terceiro valor: ";
	cin >> z;
	absZ = valor(z);
	cout << absX << endl << absY << endl << absZ;
}

