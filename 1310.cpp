#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int t, c;
	
	while( cin >> t ){
		int lucro[t];
		
		cin >> c;
		
		for(int i = 0; i < t; i++){
			cin >> lucro[i];
			
			lucro[i] -= c;
		}
			
		int pd = 0, m = 0;
		
		for(int i = 0; i < t; i++){
			pd = max(0, lucro[i] + pd);
			
			m = max(m,pd);
		}
		
		cout << m << endl;
	}
	
	return 0;
}
