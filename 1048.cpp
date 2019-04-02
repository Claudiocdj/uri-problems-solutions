#include <iostream>
#include <iomanip>

using namespace std;
	
int main(){
	
	float salario, novoSalario, reajuste;
	int percentual;
	
	cin >> salario;
	
	if( salario <= 400.00){
		novoSalario = salario*1.15;
		percentual = 15;
	}
	
	if( salario > 400.00 && salario <= 800.00){
		novoSalario = salario*1.12;
		percentual = 12;
	}
	
	if( salario > 800.00 && salario <= 1200.00){
		novoSalario = salario*1.10;
		percentual = 10;
	}
	
	if( salario > 1200.00 && salario <= 2000.00){
		novoSalario = salario*1.07;
		percentual = 7;
	}
	
	if( salario > 2000.00){
		novoSalario = salario*1.04;
		percentual = 4;
	}
	
	cout << "Novo salario: " << fixed << setprecision(2) <<novoSalario << "\n";
	cout << "Reajuste ganho: " << fixed << setprecision(2) <<novoSalario - salario << "\n";
	cout << "Em percentual: " << percentual << " %\n";
}
