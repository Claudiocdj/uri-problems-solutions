#include <iostream>

using namespace std;

int main(){
	
	int a,b,i,soma = 0;
	
	cin >> a >> b;
	
	if(a < b)
		for(i = a+1; i < b; i++)
			if(i%2 != 0)
				soma += i;
	
	if(b < a)
		for(i = b+1; i < a; i++)
			if(i%2 != 0)
				soma += i;
	
	cout << soma << "\n";
	
	return 0;
}
