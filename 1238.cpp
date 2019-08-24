#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int t;
	
	string a,b;
	
	cin >> t;
	
	while(t--){
		cin >> a >> b;	

		int n = 0;
		
		string c = "";
			
		if( a.length() > b.length())
			n = a.length();
		else
			n = b.length();
			
		for(int i = 0; i < n; i++){
			
			if(i < a.length())
				c += a[i];		
			
			if(i < b.length())
				c += b[i];
		}
		
		cout << c << endl;
	}
	
	return 0;
}
