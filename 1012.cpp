#include <iostream>
#include <iomanip>

using namespace std;
	
int main(){
	
	float a, b, c;
	
	cin >> a >> b >> c;
	
	cout << "TRIANGULO: " <<  fixed << setprecision(3) << (a*c)/2 << "\n";
	cout << "CIRCULO: " <<  fixed << setprecision(3) << c*c*3.14159 << "\n";
	cout << "TRAPEZIO: " <<  fixed << setprecision(3) << ((a+b)*c)/2 << "\n";
	cout << "QUADRADO: " <<  fixed << setprecision(3) << b*b << "\n";
	cout << "RETANGULO: " <<  fixed << setprecision(3) << a*b << "\n";
}
