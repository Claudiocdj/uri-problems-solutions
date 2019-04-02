#include <iostream>

using namespace std;

int main(){
	
	int x,z,sum, count;
	
	cin >> x >> z;
	
	while(z <= x)
		cin >> z;
	
	sum = x;
	count = 1;
	while(sum <= z){
		x++;
		sum += x;
		count++;
	}
	
	cout << count << "\n";
	
	return 0;
}
