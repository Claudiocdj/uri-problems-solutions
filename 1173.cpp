#include <iostream>

using namespace std;

int main(){
	int a, x;
	
	cin >> a;
	
	for(int i = 0; i < 10; i++){
		cout << "N[" << i << "] = " << a << "\n";
		a *= 2;
	}

	return 0;
}
