#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int t;
	
	cin >> t;
	
	string a, b;
	
	while(t--){
		
		cin >> a >> b;
		
		int n = 0;
		
		for(int i = 0; i < a.length(); i++){
			n += b[i] - a[i];
			
			if(a[i] > b[i])
				n += 26;
		}
		
		cout << n << endl;
	}
	
	return 0;
}
