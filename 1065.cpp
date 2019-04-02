#include <iostream>

using namespace std;

int main(){
	
	int i;
	int total = 0;
	
	
	for(int j = 0; j < 5; j++){
		cin >> i;
		
		if(i%2 == 0)
			total++;
	}
	
	cout << total << " valores pares\n";
	
	return 0;
}
