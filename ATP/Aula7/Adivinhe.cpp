#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

main(){
	srand(time(NULL));
	int num, x;
	num = rand();
	while(true){
		cout << "Adivinhe o numero: ";
		cin >> x;	
		if(x < num){
			cout << "O numero eh maior!" << endl;
			continue;
		}
		if(x > num){
			cout << "O numero eh menor!" << endl;
			continue;
		}
		else{
			cout << "Acertou!";
			break;
		}
	}
}
