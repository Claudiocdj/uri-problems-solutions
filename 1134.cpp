#include <iostream>

using namespace std;

int main () {
	int i = 0, alcool = 0, gasolina = 0, diesel = 0;
	
	while(i != 4){
		cin >> i;
		
		if(i == 1)
			alcool++;
		
		if(i == 2)
			gasolina++;
		
		if(i == 3)
			diesel++;
	}
	
	cout << "MUITO OBRIGADO\n";
	cout << "Alcool: " << alcool << "\n";
	cout << "Gasolina: " << gasolina << "\n";
	cout << "Diesel: " << diesel << "\n";
}
