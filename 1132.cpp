#include <iostream>

using namespace std;

int main () {
	int a,b,aux, total = 0;
	
	cin >> a >> b;
	
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	
	for(int i = a; i <= b; i++)
		if(i%13 != 0)
			total += i;
	
	cout << total << "\n";
}
