#include <iostream>
#include <cmath>
using namespace std;

main(){
	float a, b, c, delta, x1, x2;
	cout << "Informe os coeficientes a, b, e c de ax2+bx+c=0: " << endl;
	cin >> a >> b >> c;
	delta = pow(b,2) - 4*a*c; //Potência
	if (delta > 0){
		x1 = (-1*b + sqrt(delta)) / 2*a;
		x2 = (-1*b - sqrt(delta)) / 2*a;
		cout << "As raízes sao " << x1 << " e " << x2;
	}else{
		if (delta == 0){
			x1 = -1*b/2*a;
			cout << "A unica raiz eh " << x1;
		}else{
			cout << "Sem raizes reais";
		}
	}
	
}
