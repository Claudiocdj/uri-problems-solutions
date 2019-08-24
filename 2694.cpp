#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

/*
3
Ab23s249ttu21
At01v021kkk12
xx14l134mjm01
*/

int main(){
	
	int t, aux;
	
	string s;
	
	cin >> t;
	
	while(t--){
		cin >> s;
		
		int total = 0;
		
		string a = "";
		
		for(int i = 0; i < 14; i++){
			
			if(s[i] >= 48 && s[i] <= 57)
				a += s[i];
			
			else if(!a.empty()){
				stringstream geek(a);
				
                geek>>aux;
                
                total += aux;
                
                a.clear();
			}
		}
		
		if(!a.empty()){
			stringstream geek(a);
				
            geek>>aux;
                
            total += aux;
		}
		
		cout << total << endl;
	}
	
	return 0;
}
