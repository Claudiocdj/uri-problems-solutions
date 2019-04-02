#include <iostream>
#include <math.h>

using namespace std;
	
int main(){
	
	float x;
	int i, j;
	
	cin >> x;
	
	i = (int)x;
	j = 0.5 + (x - i)*100; /*adiciona 0.5 para solucionar o problema do c++ (0.10*100 = 9.999999)*/
	
	cout << "NOTAS:\n";
	cout << i/100 << " nota(s) de R$ 100.00\n";
	cout << (i%100)/50 << " nota(s) de R$ 50.00\n";
	cout << ((i%100)%50)/20 << " nota(s) de R$ 20.00\n";
	cout << (((i%100)%50)%20)/10 << " nota(s) de R$ 10.00\n";
	cout << ((((i%100)%50)%20)%10)/5 << " nota(s) de R$ 5.00\n";
	cout << (((((i%100)%50)%20)%10)%5)/2 << " nota(s) de R$ 2.00\n";
	cout << "MOEDAS:\n";
	cout << ((((((i%100)%50)%20)%10)%5)%2) << " moeda(s) de R$ 1.00\n";
	cout << j/50 << " moeda(s) de R$ 0.50\n";
	cout << (j%50)/25 << " moeda(s) de R$ 0.25\n";
	cout << ((j%50)%25)/10 << " moeda(s) de R$ 0.10\n";
	cout << (((j%50)%25)%10)/5 << " moeda(s) de R$ 0.05\n";
	cout << ((((j%50)%25)%10)%5)/1 << " moeda(s) de R$ 0.01\n";
	
}
