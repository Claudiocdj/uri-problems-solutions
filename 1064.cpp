#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float i, media = 0.0;
	int total = 0;
	
	
	for(int j = 0; j < 6; j++){
		cin >> i;
		
		if(i > 0){
			total++;
			media += i;
		}
	}
	
	cout << total << " valores positivos\n" << fixed << setprecision(1) << media/total << "\n";
	
	return 0;
}
