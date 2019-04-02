#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a, b;
	
	cin >> a >> b;
	
	cout << "MEDIA = " << fixed << setprecision(5) << ((3.5*a)+(b*7.5))/11 << "\n";
	
	return 0;
}
