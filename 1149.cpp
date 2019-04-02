#include <iostream>

using namespace std;

int main(){
	
	int a,b, soma = 0;
	
	cin >> a;
	
	do{
		cin >> b;
	}while(b <= 0);
	
	for(int i = 0; i < b; i++)
		soma += (a+i);
	
	cout << soma << "\n";
	
	return 0;
}
