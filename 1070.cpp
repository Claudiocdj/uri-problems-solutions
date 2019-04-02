#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cin >> a;
	
	if(a%2 == 0)
		a++;
	
	for(int i = 0; i < 6; i++)
		cout << a+(i*2) << "\n";
		
}
