//11) A Secretaria Geral processa as Atividades Complementares (AC) dos alunos com um programa que recebe as seguintes informa��es de cada aluno:
//i) Os 3 algarismos finais do RA (como ID) ii) O total de carga hor�ria do aluno em atividades de extens�o iii) O total de carga hor�ria em atividades de pesquisa
//Pede-se:
//a) Imprimir os RA dos alunos que j� completaram 180 horas de AC; b) Calcular a m�dia de AC em extens�o; c) A quantidade de alunos que n�o fizeram atividades de extens�o.

#include<iostream>
#include<cmath>
using namespace std;

main(){
	int ID, TotalExtens, TotalPesquisa, extens, pesquisa, qtdeSemExtens, qtdeAlunos, mediaExtens, i;
	
	cout << "Digite a quantidade de alunos a serem registrados: ";
	cin >> qtdeAlunos;
	i=0;
	TotalExtens = 0;
	TotalPesquisa = 0;
	extens = 0;
	pesquisa = 0;
	qtdeSemExtens = 0;
	mediaExtens = 0;
	
	while(i<qtdeAlunos){
		i++;
		cout << "Digte o ID do aluno (ultimos 3 numeros do RA): ";
		cin >> ID;
		cout << "Total de carga horaria do aluno em atividades de extensao: ";
		cin >> extens;
		if(extens <= 0){
			qtdeSemExtens++;
		}else{
			TotalExtens += extens;
		}
		cout << "Total de carga horaria do aluno em atividades de pesquisa: ";
		cin >> pesquisa;
		TotalPesquisa += pesquisa;
	}
	mediaExtens = TotalExtens/qtdeAlunos;
	cout << "A media de horas de atividade de extensao eh de " << mediaExtens << " hora(s) por aluno" << endl;
	cout << qtdeSemExtens << " aluno(s) nao fizeram atividades de extensao" << endl;
	
}
