#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string a, b;
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		
		if(a == b) cout << "empate" << endl;
		
		else if((a+b == "pedralargarto") ||
		(a+b == "tesourapapel") ||
		(a+b == "papelpedra") ||
		(a+b == "lagartospock") ||
		(a+b == "spocktesoura") ||
		(a+b == "tesouralagarto") ||
		(a+b == "lagartopapel") ||
		(a+b == "papelspock") ||
		(a+b == "spockpedra") ||
		(a+b == "pedratesoura"))
			cout << "rajesh" << endl;
		else
			cout << "sheldon" << endl;
	}
	
}
