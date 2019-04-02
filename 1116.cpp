#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	float a, nota = -1;
	
	while(true){
		
		cin >> a;
		
		if( a <= 10.0 && a >= 0.0){
			if(nota != -1){
				cout << "media = " << fixed << setprecision(2) << (nota+a)/2 << "\n";
				
				break;
			}
			
			else
				nota = a;
		}
		else
			cout << "nota invalida\n";
	}
	
	return 0;
}
