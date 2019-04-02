#include <iostream>

using namespace std;

int main(){
	
	float i;
	int total = 0;
	
	for(int j = 0; j < 6; j++){
		cin >> i;
		
		if(i > 0)
			total++;
	}
	
	cout << total << " valores positivos\n";
	
	return 0;
}
