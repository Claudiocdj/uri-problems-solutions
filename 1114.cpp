#include <iostream>

using namespace std;

int main () {
	
	int i;
	
	while(true){
		
		cin >> i;
		
		if(i == 2002){
			cout << "Acesso Permitido\n";
			break;
		}
		
		else
			cout << "Senha Invalida\n";
	}
	
	return 0;
}
