#include <iostream>

using namespace std;

int main(){
	
	int n, f = 1;
	
	cin >> n;
	
	for(int i = n; i > 1; i--)
		f *= i;
		
	cout << f << "\n";
	
	return 0;
}
