#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	
	cin >> a >> b;
	
	cout << "O JOGO DUROU ";
	
	if(a == b){
		cout << 24 << " HORA(S)\n";
		return 0;
	}
	
	if(a == 0){
		cout << b << " HORA(S)\n";
		return 0;
	}
	
	if(a > b){
		cout << (24-a) + b << " HORA(S)\n";
		return 0;
	}
	
	if( a < b){
		cout << b-a << " HORA(S)\n";
	}
	return 0;
}
