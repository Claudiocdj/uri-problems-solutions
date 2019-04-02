#include <iostream>

using namespace std;

int main(){
	int t,pa,pb,j;
	float g1,g2;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		cin >> pa >> pb >> g1 >> g2;
		
		for(j = 1; j <= 100; j++){
			pa += pa*g1*0.01;
			
			pb += pb*g2*0.01;
			
			if(pa > pb){
				cout << j << " anos.\n";
				break;
			}
		}
		
		if(j > 100)
			cout << "Mais de 1 seculo.\n";
	}
	
	return 0;
}
