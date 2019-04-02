#include <iostream>
#include <iomanip>

using namespace std;
	
int main(){
	
	float i;
	
	cin >> i;
	
	if(i <= 2000.00)
		cout << "Isento\n";
	
	if(i > 2000 && i <= 3000)
		cout << "R$ " << fixed << setprecision(2) << (i-2000)*0.08 << "\n";
	
	if(i > 3000 && i <= 4500)
		cout << "R$ " << fixed << setprecision(2) << (1000)*0.08 + (i-3000)*0.18 << "\n";
	
	if(i > 4500)
		cout << "R$ " << fixed << setprecision(2) << (1000)*0.08 + (1500)*0.18 + (i-4500)*0.28 << "\n";
	
	return 0;
}
