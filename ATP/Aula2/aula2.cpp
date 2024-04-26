#include<iostream>
using namespace std;
main(){
	float x, y;
	cout << "Informe um numero real" << endl;
	cin >> x;
	if(x>0){
		y = x;
	}else{
		y = -1*x;
	}
	cout << "O modulo eh " << y;
}
