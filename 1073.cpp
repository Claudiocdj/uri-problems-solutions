#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	cout << "2^2 = 4\n4^2 = 16\n";
	
	for(int i = 6; i <= n; i+=2)
		cout << i << "^2 = " << i*i << "\n";
	
	
	return 0;
}
