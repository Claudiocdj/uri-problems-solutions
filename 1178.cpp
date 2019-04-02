#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double a;
	
	cin >> a;
	
	for(int i = 0; i < 100; i++){
		cout << "N[" << i << "] = " << fixed << setprecision(4) << a << "\n";
		a /= 2.0;
	}
	
	return 0;
}
