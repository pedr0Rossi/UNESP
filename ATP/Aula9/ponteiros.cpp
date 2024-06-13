#include<iostream>
using namespace std;

void change(int *a){
	*a = 5;
}

main(){
	int a = 10;
	
	change(&a);
	
	cout << a;
}
