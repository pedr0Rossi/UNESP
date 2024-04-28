#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

main(){
	char tamanho, bases, toppings, crunches, proteinas, nut, molho, nBases, nToppings, nCrunches, nProteinas, nNut, nMolhos; 
	int montar, menu;
	float vBases, vToppings, vCrunches, vProteinas, vNut, vMolhos, valor;
	nBases = 0;
	nToppings = 0;
	nCrunches = 0;
	nProteinas = 0;
	nNut = 0;
	nMolhos = 0;
	vBases = 0;
	vMolhos = 0;
	vToppings = 0;
	vCrunches = 0;
	vProteinas = 0;
	vNut = 0; 
	valor = 0;
	cout << "---------------------------" << endl;
	cout << "Bem vindo ao Demac Poke!" << endl;
	cout << "---------------------------" << endl;
	cout << "Qual o tamanho do seu poke?";
	cout << endl << " P - Pequeno;" << endl;
	cout << endl << " M - Medio;" << endl;
	cout << endl << " G - Grande;" << endl;
	cout << "---------------------------" << endl;
	cin >> tamanho;
	if(tamanho != 'P' && tamanho != 'M' && tamanho != 'G'){
		cout << "[ERRO] O valor inserido deve ser 'P', 'M' ou 'G'! ";
		exit(NULL); 
	}
	cout << endl << "Deseja: " << endl;
	cout << "1- Montar seu poke;" << endl;
	cout << "2- Escolher um poke pronto." << endl;
	cout << "---------------------------" << endl;
	cin >> montar;
	if(montar != 1 && montar != 2){
		cout << "[ERRO] O valor inserido deve ser 1 ou 2! ";
		exit(NULL); 
	}
	if(montar == 1){
		while(true){
			cout << "---------------------------" << endl;
			cout << "Voce montara seu poke!" << endl;
			cout << "---------------------------" << endl;
			cout << endl << "1- Bases " << endl;
			cout << endl << "2- Toppings " << endl;
			cout << endl << "3- Crunches " << endl;
			cout << endl << "4- Proteinas " << endl;
			cout << endl << "5- Nut " << endl;
			cout << endl << "6- Molho " << endl;
			cout << endl << "7- Finalizar Pedido " << endl;
			cout << "---------------------------" << endl;
			cin >> menu;
			switch(menu){
				case 1:
					if(nBases < 2){
						cout << "Seu limite eh de 2 bases." << endl;
						cout << "Valor ja gasto com bases: R$" << vBases << endl;
						cout << "Base " << nBases << "/2";
						cout << endl << "A- Arroz Integral " << endl;
						cout << endl << "E- Espaguete de pupunha (+R$3,00)" << endl;
						cout << endl << "M- Mix de Folhas " << endl;
						cin >> bases;
						if (bases != 'A' && bases !='E' && bases != 'M'){
							cout << "[ERRO] O valor inserido deve ser A, E ou M ";
							break;	
						}else{
							switch(bases){
								case 'A':
									valor += 5;
									vBases += 5;
									nBases++;
									break;
								case 'E':
									valor += 8;
									vBases += 8;
									nBases++;
									break;
								case 'M':
									valor += 5;
									vBases += 5;
									nBases++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de bases." << endl;
						break;
					}
				case 2:
					if(nToppings < 3){
						cout << "Seu limite eh de 3 toppings." << endl;
						cout << "Valor ja gasto com toppigs: R$" << vToppings << endl;
						cout << "Toppings  " << nToppings << "/3";
						cout << endl << "C- Cenouro " << endl;
						cout << endl << "E- Edamame (+R$1.00)" << endl;
						cout << endl << "T- Tomate Cereja " << endl;
						cin >> toppings;
						if (toppings != 'C' && toppings !='E' && toppings != 'T'){
							cout << "[ERRO] O valor inserido deve ser C, E ou T ";
							break;	  
						}else{
							switch(toppings){
								case 'C':
									valor += 2;
									vToppings += 2;
									nToppings++;
									break;
								case 'E':
									valor += 3;
									vToppings += 3;
									nToppings++;
									break;
								case 'T':
									valor += 2;
									vToppings += 2;
									nToppings++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de toppings." << endl;
						break;
					}
				case 3:
					if(nCrunches < 2){
						cout << "Seu limite eh de 2 crunches." << endl;
						cout << "Valor ja gasto com crunches: R$" << vCrunches << endl;
						cout << "Crunches:  " << nCrunches << "/2";
						cout << endl << "C- Couve Crispy (+R$1.00) " << endl;
						cout << endl << "E- Palha de Nori" << endl;
						cin >> crunches;
						if (crunches != 'C' && crunches !='E'){
							cout << "[ERRO] O valor inserido deve ser C ou E ";
							break;	  
						}else{
							switch(crunches){
								case 'C':
									valor += 3;
									vCrunches += 3;
									nCrunches++;
									break;
								case 'E':
									valor += 2;
									vCrunches += 2;
									nCrunches++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de crunches." << endl;
						break;
					}
				case 4:
					if(nProteinas < 2){
						cout << "Seu limite eh de 2 proteinas." << endl;
						cout << "Valor ja gasto com proteinas: R$" << vProteinas << endl;
						cout << "Proteinas:  " << nProteinas << "/2";
						cout << endl << "O- Ovo de codorna " << endl;
						cout << endl << "S- Shimeji" << endl;
						cin >> proteinas;
						if (proteinas != 'O' && proteinas !='S'){
							cout << "[ERRO] O valor inserido deve ser O ou S ";
							break;	  
						}else{
							switch(proteinas){
								case 'O':
									valor += 5;
									vProteinas += 5;
									nProteinas++;
									break;
								case 'S':
									valor += 5;
									vProteinas += 5;
									nProteinas++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de proteinas." << endl;
						break;
					}
				case 5:
					if(nNut < 1){
						cout << "Seu limite eh de 1 nut." << endl;
						cout << "Valor ja gasto com nut: R$" << vNut << endl;
						cout << "Nut:  " << nNut << "/1";
						cout << endl << "A- Amendoim " << endl;
						cin >> nut;
						if (nut != 'A'){
							cout << "[ERRO] O valor inserido deve ser A";
							break;	 
						}else{
							switch(nut){
								case 'A':
									valor += 3;
									vNut += 3;
									nNut++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de nut." << endl;
						break;
					}
				case 6:
					if(nMolhos < ){
						cout << "Seu limite eh de 1 molho." << endl;
						cout << "Valor ja gasto com molhos: R$" << vMolhos << endl;
						cout << "Molhos:  " << nMolhos << "/1";
						cout << endl << "P- Ponzu (+R$1.00)" << endl;
						cout << endl << "T- Teriaky (+R$1.00)" << endl;
						cout << endl << "S- Shoyu " << endl;
						cin >> molho;
						if (molho != 'P' && molho != 'T' && molho != 'S'){
							cout << "[ERRO] O valor inserido deve ser P, T ou S";
							break;	 
						}else{
							switch(molho){
								case 'P':
									valor += 3;
									vMolhos += 3;
									nMolhos++;
									break;
								case 'T':
									valor += 3;
									vMolhos += 3;
									nMolhos++;
									break;
								case 'S':
									valor += 2;
									vMolhos += 2;
									nMolhos++;
									break;
							}
						}
						break;
					}else{
						cout << "Voce ja atingiu o numero limite de molhos." << endl;
						break;
					}
				case 7:
					break;
			}	
		}
	}
	cout << "Finalizando pedido..." << endl;
	if(tamanho == 'P'){
	    cout << "Voce pediu um poke pequeno com as seguintes opcoes: " << << endl;
	}
	else if(tamanho == 'M'){
	    cout << "Voce pediu um poke medio com as seguintes opcoes: " << << endl;
	}
	else if(tamanho == 'G'){
	    cout << "Voce pediu um poke grande com as seguintes opcoes: " << << endl;
	}
	
}
