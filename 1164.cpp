#include <iostream>

using namespace std;

int main(){
	int a,b,sum;
	
	cin >> a;
	
	for(int i = 0; i < a; i++){
		cin >> b;
		
		sum = 0;
		
		for(int j = 1; j < b; j++)
			if(b%j == 0)	
				sum += j;	
		
		if(sum == b)
			cout << b << " eh perfeito\n";
			
		else
			cout << b << " nao eh perfeito\n";
	}
	
	return 0;
}
