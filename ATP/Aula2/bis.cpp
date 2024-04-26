#include <iostream>;
#include <cmath>;
using namespace std;

main(){
	int ano;
	cout << "Informe o ano: ";
	cin >> ano;
	if(ano%4==0){
		if(ano%100 == 0){
			if(ano%400 == 0){
				cout << "Eh bissexto";	
			}
			else{
				cout << "Nao eh bissexto";
			}
		}
		else{
			cout << "Eh bissexto";
		}
	}else{
		cout << "Nao eh bissexto";
	}
}
