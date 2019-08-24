#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n, a, aux;
	
	string s, sout;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> s >> a;
		
		sout = "";
		
		for(int j = 0; j < s.length(); j++){
			aux = s[j];
			
			if(aux - a < 65)
				cout << (char) (aux - a + 26);
			else
				cout << (char) (aux - a);
		}
		cout << endl;
	}
	
	
}
