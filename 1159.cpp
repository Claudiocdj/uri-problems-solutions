#include <iostream>

using namespace std;

int main(){
	
	int x,sum;
	
	cin >> x;
	while(x != 0){
		
		if(x%2 != 0)
			x++;
		
		sum = 0;
		
		for(int i = 0; i < 5; i++)
			sum += x+(2*i);
		
		cout << sum << "\n";
		
		cin >> x;
	}
	
	return 0;
}
