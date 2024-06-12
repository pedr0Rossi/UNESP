#include<iostream>
#include<cmath55>
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
}
