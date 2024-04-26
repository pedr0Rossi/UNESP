#include<iostream>
using namespace std;

main(){
	int ano;
	cout << "Informe o ano: ";
	cin >> ano;
	if(ano%400==0 || ano%4 == 0 && ano%100 != 0){
		cout << "Bissexto";
	}else{
		cout << "Nao bissexto";
	}
}
