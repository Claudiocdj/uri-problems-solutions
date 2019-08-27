#include <iostream>

using namespace std;

int main(){
	
	int t, d;
	
	float c;
	
	cin >> t;
	
	while(t--){
		cin >> c;
		
		d = 0;
		
		while( c > 1){
			d++;
			
			c *= 0.5;
		}
		
		cout << d << " dias" << endl;
	}
	
	return 0;
}
