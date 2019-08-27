#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	
	while ( getline(cin, s) ){
		
		bool m = true;
		
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ' ') continue;

			if(s[i] >= 'a' && s[i] <= 'z' && m == true)
				s[i] -= 32;
			
			if(s[i] >= 'A' && s[i] <= 'Z' && m == false)
				s[i] += 32;
			
			m = !m;
		}
		
		cout << s << endl;
	}
	
	return 0;
}
