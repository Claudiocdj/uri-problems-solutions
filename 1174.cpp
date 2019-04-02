#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a;
	
	for(int i = 0; i < 100; i++){
		cin >> a;
		
		if(a <= 10.0)
			cout << "A[" << i << "] = " << fixed << setprecision(1) << a << "\n";
	}

	return 0;
}
