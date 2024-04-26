#include<iostream>
using namespace std;
main(){
	char casa;
	cout << "Informe a casa conforme o codigo: (G)rifinoria | (S)onserina | (L)ufa-lufa | (C)ornival" << endl;
	cin >> casa;
	switch (casa){
		case 'G':
			cout << "Harry Potter";
			break; 
		case 'S':
			cout << "Draco Malfoy";
			break;
		case 'L':
			cout << "Sprout";
			break;
		case 'C':
			cout << "Ravenclaw";
			break;
		case 'g':
			cout << "Harry Potter";
			break;
		case 's':
			cout << "Draco Malfoy";
			break;
		case 'l':
			cout << "Sprout";
			break;
		case 'c':
			cout << "Ravenclaw";
			break;
		defaut:
			cout << "Opcao invalida";
	}
}
