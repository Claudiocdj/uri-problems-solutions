#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float n = 0;
	
	for(float i = 1; i <= 100; i++)
		n += 1/i;
	
	cout << fixed << setprecision(2) << n << "\n";
	
	return 0;
}
