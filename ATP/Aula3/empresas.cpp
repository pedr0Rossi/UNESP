#include <iostream>
using namespace std;
main(){
	char marca;
	cout << "Informe a marca do eletronico: A - Apple | M - Microsoft | O - Outra" << endl;
	cin >> marca;
	switch(marca){
		case 'A':
			cout << "Massas e macas";
			break;
		case 'M':
			cout << "Vidracas claras";
			break;
		case 'O':
			cout << "Eletronica Einstein";
			break;
		default:
			cout << "Insira um caracter valido";
			break;
	}
}
