#include <iostream>
//std::cout, std::cin, >> & <<, using namespace, endL

using namespace std;

main(){
	
	float m, h, energ, einstein;
	cout << "Informe o valor da massa (em kg): ";
	cin >> m;
	cout << "Informe o valor da altura (em metros): ";
	cin >> h;
	
	energ = m*9.8*h; //energia potencial
	einstein = m*3e8*3e8; //mc²
	cout << endl << "A energia vale " << energ << " joules";
	
}
