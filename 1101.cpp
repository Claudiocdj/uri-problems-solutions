#include <iostream>

using namespace std;

int main () {
	
	int m,n,aux,total;
	
	while(true){
		cin >> m >> n;
		
		if( m <= 0 || n <= 0)
			break;
		
		if(n > m){
			aux = n;
			n = m;
			m = aux;
		}
		
		total = 0;
		
		for(int i = n; i <= m; i++){
			cout << i << " ";
			
			total += i;
		}
		
		cout << "Sum=" << total << "\n";
	}
	
	return 0;
}
