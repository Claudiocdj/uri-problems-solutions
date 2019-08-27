#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int t;
	char c;
	string s;
	
	cin >> t;
	
	getline(cin, s);
	
	while(t--){
		
		getline(cin, s);

		string a = s;
		
		for(int i = 0; i < a.size(); i++){
			
			c = s[i];
			
			if( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
				c += 3;
				
			if(i < (a.size() + a.size()%2)/2)
					c -= 1;
			
			a[a.size() - 1 - i] = c;
		}
		
		cout << a << endl;
	}
	
	return 0;
}
