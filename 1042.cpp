#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int x[3], y[3];
	
	cin >> x[0] >> x[1] >> x[2];
	
	copy(x,x+3,y);
	
	sort(x,x+3);
	
	cout << x[0] << "\n" << x[1] << "\n" << x[2] << "\n\n" << y[0] << "\n" << y[1] << "\n" << y[2] << "\n";
	
	return 0;
}
