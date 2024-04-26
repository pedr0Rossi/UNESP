//Faça um algoritmo para receber informações de funcionarios: a)salario, b)tempo de serviço, c)se ocupa cargo de confiança (s/n), d)nº de dependentes
//Interrompa o quando o salario for negativo.
//Imprimir: 1)media dos salarios de quem nunca ocupou cargo de confiança; 2)maior salario; 3)menor tempo de serviço; 4)Salário de quem tem mais dependentes; 5) Se todos
//tem mais de 10 anos de serviço

#include<iostream>
#include<cmath>
using namespace std;

main(){
	int i, salario, mediaSalarioNConfianca, salarioNConfianca, numeroNConfianca, tempo, dependentes, maiorSalario, menorTempo, maisDependentes, salarioMaisDependentes;
	char cargo;
	bool maisDeDez, flag;
	mediaSalarioNConfianca = 0;
	numeroNConfianca = 0;
	salarioNConfianca = 0;
	maisDependentes = 0;
	flag = true;
	maisDeDez = true;
	menorTempo = 100;
	
	while(i<2){
		salario = 0;
		tempo = 0;
		dependentes = 0;
		cout << "Informe o salario: ";
		cin >> salario;
		if(salario > 0){		
			if(salario > maiorSalario){
				maiorSalario = salario;
			}
		}else{
			flag = false;
			break;
		}
		cout << "Informe o tempo de servico (em anos): ";
		cin >> tempo;
		if(tempo < menorTempo){
			menorTempo = tempo;
		}
		if(tempo<10){
			maisDeDez = false;
		}
		cout << "Informe se ocupa cargo de confianca (S/N): ";
		cin >> cargo;
		if(cargo == 'N'){
			salarioNConfianca += salario;
			numeroNConfianca++;
		}
		cout << "Informe o numero de dependentes: ";
		cin >> dependentes;	
		if(dependentes > maisDependentes){
			maisDependentes = dependentes;
			if(salario > salarioMaisDependentes){
				salarioMaisDependentes = salario;
			}
		}
		i++;
	}
	if(flag){
		if(salarioNConfianca > 0){
			mediaSalarioNConfianca = salarioNConfianca / numeroNConfianca;
		}
		cout << endl << "Media dos salarios de quem nunca ocupou cargo de confianca: R$" << mediaSalarioNConfianca << endl << "O maior salario eh de: R$" << maiorSalario;
		cout << endl << "O menor tempo de servico eh de: " << menorTempo << " anos." << endl << "O salario de quem tem mais dependentes eh de: R$" << salarioMaisDependentes;
		if(maisDeDez){
			cout << endl << "Todos tem dez anos de servico ou mais";
		}else{
			cout << endl << "Nem todos tem dez anos de servico ou mais";
		}
	}
}
