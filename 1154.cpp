#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int a, total = 0;
	float sum = 0;
	
	cin >> a;
	while(a > 0){
		total++;
		
		sum += a;
		
		cin >> a;
	}
	
	cout << fixed << setprecision(2) << sum/total << "\n";
	
	return 0;
}
