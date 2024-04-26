#include <iostream>
using namespace std;
main(){
	char c;
	string msg;
	cin >> c >> msg;
	if (c == 'S' || c == 's'){
		cout << "Hello " << msg;
		if(msg == "BCC"){
			cout << " Bye";
		}		
	}else{
		cout << "Bye";
	}
}
