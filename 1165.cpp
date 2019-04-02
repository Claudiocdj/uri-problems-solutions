#include <iostream>

using namespace std;

int main(){
	int a,b,j;
	
	cin >> a;
	
	for(int i = 0; i < a; i++){
		cin >> b;
		
		for(j = 2; j < b; j++){
			if(b%j == 0){
				cout << b << " nao eh primo\n";
				
				break;
			}
		}
		
		if(j == b)
			cout << b << " eh primo\n";
	}
	
	return 0;
}
