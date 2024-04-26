#include<iostream>
using namespace std;
main(){	
	char pao, recheio;
	bool flag_opcao_ok = true;
	float preco;
	cout << "Escolha o pao: F - Frances | I - Italiano" << endl;
	cin >> pao;
	switch(pao){
		case 'F':
			cout << "O pao escolhido foi o frances";
			preco = 1.50;
			break;
		case 'f':
			cout << "O pao escolhido foi o frances";
			preco = 1.50;
			break;
		case 'I':
			cout << "O pao escolhido foi o italiano";
			preco = 1.70;
			break;
		case 'i':
			cout << "O pao escolhido foi o italiano";
			preco = 1.70;
			break;
		default:
			cout << endl << "Opcao inexistente!";
			flag_opcao_ok = false;
			break;
	}
	if(flag_opcao_ok){
		cout << endl << "Escolha o recheio: H - Hamburguer | F - Frango | S - Soja" << endl;
		cin >> recheio;
		switch(recheio){
			case 'H':
				cout << "O recheio escolhido foi o hamburguer";
				preco += 7;
				break;
			case 'h':
				cout << "O recheio escolhido foi o hamburguer";
				preco += 7;
				break;
			case 'F':
				cout << "O recheio escolhido foi o frango";
				preco += 5;
				break;
			case 'f':
				cout << "O recheio escolhido foi o frango";
				preco += 5;
				break;
			case 'S':
				cout << "O recheio escolhido foi a soja";
				preco += 3;
				break;
			case 's':
				cout << "O recheio escolhido foi a soja";
				preco += 3;
				break;
			default:
				cout << endl << "Opcao inexistente!";
				flag_opcao_ok = false;
				break;
		}
		cout << endl << "O valor a ser pago eh de R$" << preco << "0";
	}
}
