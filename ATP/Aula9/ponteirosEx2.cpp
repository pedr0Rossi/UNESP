#include<iostream>
#include<math.h>
using namespace std;

void separar(float* num, int* inteiro, float* frac){
	*inteiro = trunc(*num);
	*frac = *num - *inteiro;
}
main(){
	float a = 3.1415;
	float frac = 0.0;
	int inteiro;
	
	separar(&a, &inteiro, &frac);
	cout << inteiro << endl << frac;
}
