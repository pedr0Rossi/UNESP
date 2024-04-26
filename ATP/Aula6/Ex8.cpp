//8) Faça um algoritmo que gera exatamente a sequência mostrada no exemplo abaixo. Use uma estrutura de repetição (laço). Deduza a lei de formação da sequência.
//Exemplo:
//0
//1
//100.0
//15
//2
//31
//50.0
//10
//4
//61
//25.0
//5
//6
//91
//12.5
//0
//8
//121
//6.25
//-5

#include<iostream>
#include<cmath>

using namespace std;

main(){
	int n1, n2, n4, i;
	float n3;
	n1 = 0;
	n2 = 1;
	n3 = 100;
	n4 = 15;
	
	cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl;
	while (i<100){
		n1 += 2;
		n2 += 30;
		n3 = n3/2;
		n4 = n4-5;
		cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl;
		i++;
	}
	
}
