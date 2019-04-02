#include <iostream>
#include <iomanip>

using namespace std;
	
int main(){
	
	int a,b;
	double c, total;
	
	cin >> a >> b >> c;
	total = b*c;
	
	cin >> a >> b >> c;
	total += b*c;
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << "\n";
}
