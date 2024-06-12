#include<iostream>
using namespace std;
#define MAX 10;
int main(){
	
	//Sintaxe
	int matriz_exemplo[3][4];
	int matriz[3][2] = {{1,0} , {3,4} , {5,9}};
	int l = 3;
	int c = 2;
	
	//0D
	cout << matriz [2][0] << endl;
	matriz[1][1] = 12;
	
	//Imprimir toda a matriz
	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	//Imprimir linha específica 
	cout << endl;
	for(int i=0; i<c; i++){
		cout <<matriz[i][l] << " ";
	}
}
