#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

main(){
	srand(time(NULL));
	int num;
	do{
		num = rand() % 100 + 1;		
		cout << num << endl;
	}while (num<80);	
}
