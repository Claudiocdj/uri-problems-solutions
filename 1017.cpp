#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
	
int main(){
	
	float t,v;
	
	cin >> t >> v;
	
	cout << fixed << setprecision(3) << (t*v)/12.0 << "\n";
}
