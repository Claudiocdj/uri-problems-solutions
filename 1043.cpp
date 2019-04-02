#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	float a,b,c;
	
	cin >> a >> b >> c;
	
	if( (abs(b-c) < a && a < b+c) && (abs(a-c) < b && b < a+c) && (abs(a-b) < c && c < a+b) )
		cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << "\n";
	else
		cout << "Area = " << fixed << setprecision(1) <<((a+b)*c)/2 << "\n";
	
	return 0;
}
