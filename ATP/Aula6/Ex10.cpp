//Deodato � propriet�rio de um restaurante e tem tr�s fornecedores em sua cidade: a "Horta M�gica", o "Momento de Colheita" e a "Natureza Ecol�gica". 
//Ele resolveu comparar as compras semanais de tr�s produtos: Abobrinha, Br�colis e Cenoura. Todos os fornecedores oferecem produtos org�nicos e n�o org�nicos (chamados aqui de "usuais").
//Fa�a um algoritmo em que Deodato poder� digitar a quantidade em gramas do produto, o pre�o por quilo, al�m das demais caracter�sticas.
//Ap�s a inser��o dos dados, o programa deve informar: a) O peso total de todos os produtos adquiridos; b) O pre�o do produto mais caro (maior pre�o por kg).
//(Em caso de empate, apenas um dos empatados deve ser mostrado, e pode ser qualquer um deles);
//c) A quantidade total de produtos org�nicos adquiridos; d) A m�dia do pre�o por quilo da cenoura n�o org�nica; e) O produto usual de menor pre�o; f) O total gasto na "Horta M�gica".

#include<iostream>
#include<cmath>
using namespace std;
main(){
	int pesoTotalG, qtdeOrganicos, i, j;
	float precoKG, maiorPrecoKG, precoKGMedioCenouraUsual, precoKGTotalCenouraUsual, qtdeCenouraUsual, menorPrecoKGUsual, precoTotalHortaMagica, valor, pesoG;
	string produto;
	char fornecedora, organico;
	bool boolOrganico;
	
	i=1;
	maiorPrecoKG = 0;
	menorPrecoKGUsual = 99999;
	qtdeOrganicos = 0;
	precoTotalHortaMagica = 0;
	cout << "Informe quantos itens pretende processar: ";
	cin >> j;
	
	while (i<=j){
		if(i==j){		
			cout << "Informe o item " << i << ": " << endl;
		}else{
			cout << "Informe o item " << i << ", depois mais " << j-i << ": " << endl;
		}
		cout << "Fornecedor (H para Horta Magica | M para Momento de Colheita | N para Natureza Ecologica): ";
		cin >> fornecedora;
		cout << "Informe se eh organico (S para Sim | N para Nao): ";
		cin >> organico;
		if (organico == 'S'){
			boolOrganico = true;
			qtdeOrganicos++;
		}else{
			boolOrganico = false;
		}
		cout << "Informe o produto (abobrinha | brocolis | cenoura): ";
		cin >> produto;
		cout << "Informe a quantidade adquirida (em gramas): ";
		cin >> pesoG;
		pesoTotalG += pesoG;
		cout << "Informe o preco por quilo: ";
		cin >> precoKG;
		if (precoKG < menorPrecoKGUsual && organico == 'N'){
			menorPrecoKGUsual = precoKG;
		}
		if (produto == "cenoura" && organico == 'S'){
			precoKGTotalCenouraUsual += precoKG;
			qtdeCenouraUsual++;
		}
		if (precoKG > maiorPrecoKG){
			maiorPrecoKG = precoKG;
		}
		
		valor = precoKG * (pesoG/1000);
		if(fornecedora=='H'){
			precoTotalHortaMagica += valor;
		}
		i++;
	}
	precoKGMedioCenouraUsual = precoKGTotalCenouraUsual/qtdeCenouraUsual;
	cout << "Peso total de todos os produtos adquiridos: " << pesoTotalG << endl;
	cout << "Preco do produto mais caro: " << maiorPrecoKG << endl;
	cout << "A quantidade total de produtos organicos adquiridos: " << qtdeOrganicos << endl;
	cout << "A media de preco por kg da cenoura nao organica: " << precoKGMedioCenouraUsual << endl;
	if(menorPrecoKGUsual == 99999){
		cout << "Produto usual de menor preco: " << "---" << endl;
	}else{
		cout << "Produto usual de menor preco: " << menorPrecoKGUsual << endl;
	}
	cout << "O total gasto na horta magica: " << precoTotalHortaMagica << endl;
}
