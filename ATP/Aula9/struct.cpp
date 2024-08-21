#include<iostream>
using namespace std;
//Em c++, a linguagem possibilita o programa a criar um tipo COMPOSTO (formado da composição de outros elementos chamados de componentes) 
//Componentes podem ser tipos elementares (int, float, bool, char) ou outros tipos compostos.

struct pessoa{
	long id;
	int idade;
	char sexo;
	char pais[2];
};

main(){
	//Como acessar os campos para preenchêlos: .
	struct pessoa a1;
	a1.id = 123456;
	a1.idade = 18;
	a1.sexo = 'M';
	a1.pais[0] = 'B'; a1.pais[1] = 'R';
	
	cout << a1.id << " " << a1.sexo;
	
	struct array_completo{
		float dados[100];
		int tamanho;
	};
	
	struct array_completo ar = {{23, 456, 7890, 1}, 4};
	
	for (int i=0; i<ar.tamanho; i++){
		cout << endl << "dado n" << i+1 << ": " << ar.dados[i];
	}
	cout << ar.tamanho;
	
	struct ratings{
		long id;
		float contents;
		bool hasExercises;
		float essential;	
	};
	
	struct ratings database[100];
	
	database[0].id=1234; database[0].contents=8; database[0].hasExercises=false; database[0].essential = 30;
	for(int i = 0; i < 1; i++){
		cout << database[i];
	}
}
