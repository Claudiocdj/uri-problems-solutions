#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, a;
	long long f[61];
	
	cin >> n;

	f[0] = 0;
	f[1] = 1;
	
	for(int i = 2; i < 61; i++)
		f[i] = f[i-2]+f[i-1];
	
	for(int i = 0; i < n; i++){
		cin >> a;
		cout << "Fib(" << a << ") = " << f[a] << "\n";
	}
}
