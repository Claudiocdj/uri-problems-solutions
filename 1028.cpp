#include <iostream>

using namespace std;

int main(){
	
	int n, f1, f2, a, b, c;
	
	cin >> n;
	
	while(n--){
		cin >> f1 >> f2;
		
		if(f1 < f2){
			a = f1;
			b = f2;
		}
		else{
			a = f2;
			b = f1;
		}
		
		while( b % a != 0 ){
			c = b % a;
			b = a;
			a = c;
		}
		
		cout << a << endl;
	}
	
	return 0;
}
