#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(){
	
	float v[3], a,b,c;
	
	cin >> v[0] >> v[1] >> v[2];
	
	sort(v,v+3);
	
	a = v[2];
	b = v[1];
	c = v[0];
	
	if(a >= b + c){
		cout << "NAO FORMA TRIANGULO\n";
		return 0;
	}
	if( (a*a) == (b*b) + (c*c) )
		cout << "TRIANGULO RETANGULO\n";
		
	if((a*a) > (b*b) + (c*c))
		cout << "TRIANGULO OBTUSANGULO\n";
		
	if((a*a) < (b*b) + (c*c))
		cout << "TRIANGULO ACUTANGULO\n";
	
	if(a == b && b == c)
		cout << "TRIANGULO EQUILATERO\n";
	
	if( (a == b && b != c) || (a == c && c != b) || (b == c && c != a) )
		cout << "TRIANGULO ISOSCELES\n";
	
	return 0;
}
