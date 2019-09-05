#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char d;
	
	string n;
	
	cin >> d >> n;
	
	while( d != '0' && n != "0"){
		
		string s = "";
		
		bool zero = true;
		
		for(int i = 0; i < n.length(); i++){
			if(n[i] != d){
				if(n[i] == '0' && zero)
					continue;
				
				s += n[i];
				
				zero = false;
			}
		}
		
		if(s == "")
			s = "0";
			
		cout << s << endl;
		
		cin >> d >> n;
	}
	
	return 0;
}
