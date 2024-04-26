//9) Escreva um breve algoritmo que imprime todos os números de 1 a 100, um por linha. Para todos os múltiplos de 3, imprima "Fizz" no lugar do número. 
//Para todos os múltiplos de 5, imprima "Buzz" no lugar do número. Para os números que são múltiplos, ao mesmo tempo, de 3 e 5, imprima "FizzBuzz" no lugar do número.

#include<iostream>
#include<cmath>

using namespace std;

main(){
	int i;
	i = 1;
	
	while(i<101){
		if(i%3==0 && i%5==0){
			cout << "FizzBuzz" << endl;
			i++;
			continue;
		}else{
			if(i%3==0){
				cout << "Fizz" << endl;
				i++;
				continue;
			}
			if(i%5==0){
				cout << "Buzz" << endl;
				i++;
				continue;
			}	
		}
		if(i%3!=0 && i%5!=0){
			cout << i << endl;
			i++;
			continue;
		}
	}
}
