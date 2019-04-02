#include <iostream>

using namespace std;

int main(){
	int n, a, menor, posicao;
	
	cin >> n >> a;
	
	menor = a;
	posicao = 0;
	
	for(int i = 1; i < n; i++){
		cin >> a;
		
		if(a < menor){
			menor = a;
			posicao = i;
		}
	}
	
	cout << "Menor valor: " << menor << "\nPosicao: " << posicao << "\n";
	
	return 0;
}
