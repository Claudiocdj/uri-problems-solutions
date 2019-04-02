#include <iostream>

using namespace std;

int main () {
	
	int m,n;
	
	while(true){
		cin >> n >> m;
		
		if(n == m)
			break;
		
		if(n > m)
			cout << "Decrescente\n";
			
		if(n < m)
			cout << "Crescente\n";
	}
	
	return 0;
}
