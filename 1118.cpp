#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	float in, nota = -1, resposta;
	bool executar = true;
	
	while(executar){
		
		cin >> in;
		
		if( in <= 10.0 && in >= 0.0){
			if(nota != -1){
				cout << "media = " << fixed << setprecision(2) << (nota+in)/2 << "\n";
				
				resposta = 0;
				while(resposta != 1 && resposta != 2){
					cout << "novo calculo (1-sim 2-nao)\n";
					
					cin >> resposta;
					
					if(resposta == 1)
						nota = -1;
					
					else if(resposta == 2)
						executar = false;
				}
			}
			
			else
				nota = in;
		}
		else
			cout << "nota invalida\n";
	}
	
	return 0;
}
