#include <iostream>

using namespace std;

int f(int n,int *c){
	*c += 1;
	
	if(n == 0) return 0;
	if(n == 1) return 1;
	
	return f(n-1, c) + f(n-2, c);
}

int main(){
	
	int t, n, c, r;
	
	cin >> t;
	
	while(t--){
		cin >> n;
		
		c = 0;
		
		r = f(n,&c);
		
		cout << "fib(" << n << ") = " << c - 1 << " calls = " << r << endl;
	}
	
	
	return 0;
}
