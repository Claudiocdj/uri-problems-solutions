#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n;
	float a,b,c;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
			
		cin >> a >> b >> c;
		
		cout << fixed << setprecision(1) << (a*2 + b*3 + c*5)/10 << "\n";
	}
	
	return 0;
}
