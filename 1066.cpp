#include <iostream>

using namespace std;

int main(){
	
	int i, pares = 0, impares = 0, positivos = 0, negativos = 0;
	
	
	for(int j = 0; j < 5; j++){
		cin >> i;
		
		if(i%2 == 0)
			pares++;
		else
			impares++;
		
		if(i > 0)
			positivos++;
		else if(i < 0)
			negativos++;
	}
	
	cout << pares << " valor(es) par(es)\n";
	cout << impares << " valor(es) impar(es)\n";
	cout << positivos << " valor(es) positivo(s)\n";
	cout << negativos << " valor(es) negativo(s)\n";
	
	return 0;
}
