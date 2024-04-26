#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Digite dois numeros: " << endl;
	cin >> a >> b;
	
	if (a>b){
		cout << a << " eh maior que " << b;
	}else{
		cout << b << " eh maior que " << a;
	}
}
