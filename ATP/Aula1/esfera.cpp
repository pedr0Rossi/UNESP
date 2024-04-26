#include <iostream>
using namespace std;

main(){
		
	float r, a, v; //raio, área e volume
	cout << "Informe o valor do raio da esfera em metros: "; 
	cin >> r;
	v = (3.14*4/3)*(r*r*r);
	a = 4 * 3.14 * (r*r);
	cout << endl << "O valor do volume da esfera e de " << v;
	cout << endl << "O valor da area da esfera e de " << a;
	
}
