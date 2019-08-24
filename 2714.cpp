#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int t,i ;
	
	string s;
	
	cin >> t;
	
	while(t--){
		cin >> s;
		
		int num = 0;
		
		string out = "";
		
		if(s[0] != 'R' || s[1] != 'A' || s.length() != 20){
			cout << "INVALID DATA" << endl;
			
			continue;
		}
		
		for(i = 2; i < 20; i++)
			if(s[i] >= 49 && s[i] <= 57)
				break;
		
		if(i == 20){
			cout << "INVALID DATA" << endl;
			
			continue;
		}
		
		for(int j = i; j < 20; j++)
			cout << s[j];
		
		cout << endl;
	}
	
	return 0;
}
