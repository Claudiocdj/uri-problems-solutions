#include <iostream>

using namespace std;

/* Metodo, prático mas lento:	Time limit exceeded
int fib(int n){
	if(n == 0)
		return 0;
		
	if(n == 1 || n == 2)
		return 1;

	return fib(n-1) + fib(n-2);
}
*/

int main(){
	
	int i, n, fib[46];
	
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	
	cin >> n;
	
	if(n == 1)
		cout << "0\n";
	else if(n == 2)
		cout << "0 1\n";
	else{
		for(i = 0; i < n-1; i++){
			if(i > 2)
				fib[i] = fib[i-1] + fib[i-2];
				
			cout << fib[i] << " ";
		}
		
		cout << fib[i-1] + fib[i-2] << "\n";
	}
		
	return 0;
}
