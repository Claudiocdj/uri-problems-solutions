#include <iostream>

using namespace std;

int main () {
	
	int a, b;
	int vitInter = 0, vitGremio = 0, empates = 0;
	
	while(true){
		
		cin >> a >> b;
		
		if(a > b)
			vitInter++;
			
		else if(a < b)
			vitGremio++;
			
		else if(a == b)
			empates++;
		
		cout << "Novo grenal (1-sim 2-nao)\n";
		
		cin >> a;
		
		if(a == 2)
			break;
	}
	
	cout << vitInter+vitGremio+empates << " grenais\n";
	cout << "Inter:" << vitInter << "\n";
	cout << "Gremio:" << vitGremio << "\n";
	cout << "Empates:" << empates << "\n";
	
	if(vitInter > vitGremio)
		cout << "Inter venceu mais\n";
		
	else if(vitGremio > vitInter)
		cout << "Gremio venceu mais\n";
	
	else if(vitGremio == vitInter)
		cout << "Nao houve vencedor\n";
	
	return 0;
}
