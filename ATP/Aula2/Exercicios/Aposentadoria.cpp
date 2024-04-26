#include <iostream>
using namespace std;

main(){
	//	Nome, sexo e idade
	string nome;
	char sexo;
	int idade;
	
	cout << "Digite seu nome, seu sexo (M para masculino e F para feminino) e sua idade." << endl;
	cin >> nome >> sexo >> idade;
	
	if(sexo == 'm' || sexo == 'M'){
		if(idade >= 65){
			cout << nome << ", voce pode se aposentar";
		}else{
			cout << nome << ", voce nao pode se aposentar";
		}
	}
	if (sexo == 'f' || sexo == 'F'){
		if(idade >= 63){
			cout << nome << ", voce pode se aposentar";
		}else{
			cout << nome << ", voce nao pode se aposentar";
		}
	}
}
