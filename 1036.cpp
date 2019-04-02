#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
	
int main(){
	
	double a,b,c;
	double delta;
	
	cin >> a >> b >> c;
	
	delta = b*b - 4*a*c;
	
	if(delta < 0 || a == 0)
		cout << "Impossivel calcular\n";
	else{
		cout << "R1 = " << fixed << setprecision(5) << (-1*b+sqrt(delta))/(2*a) << "\n";
		cout << "R2 = " << fixed << setprecision(5) << (-1*b-sqrt(delta))/(2*a) << "\n";	
	}
}
