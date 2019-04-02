#include <iostream>

using namespace std;

int main(){
	
	int n,x,y,sum;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		
		if(x%2 == 0)
			x = x+1;
			
		sum = 0;
		
		for(int j = 0; j < y; j++)
			sum += x+(2*j);
			
		cout << sum << "\n";
	}
	
	return 0;
}
