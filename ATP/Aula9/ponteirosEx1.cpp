#include<iostream>
using namespace std;

//Apenas a letra da vari�vel indica seu endere�o na mem�ria, enquanto o * sinaliza o ponteiro (valor)
string compare(int *a, int *b){
	cout << a << " " << b;
	return a>b ? "a eh maior" : "b eh maior";
}

main(){
	int a, b, maior5;
	a = 15;
	b = 10;
	
	cout << compare(&a, &b);
}
