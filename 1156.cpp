#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float n = 1;
	
	for(float i = 3, j = 2; i <= 39; i += 2, j *= 2)
		n += i/j;
	
	cout << fixed << setprecision(2) << n << "\n";
	
	return 0;
}
