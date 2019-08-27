#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	
	long long int sumA, sumB;
	
	while( cin >> a >> b){
		
		sumA = sumB = 1;;
		
		for(int i = a; i > 1; i--)
			sumA *= i;
		
		for(int i = b; i > 1; i--)
			sumB *= i;
		
		cout << sumA + sumB << endl;
	}
	
	return 0;
}
