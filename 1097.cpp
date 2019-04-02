#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	for(int i = 1; i <= 9; i+=2){
		cout << "I=" << i << " J=" << 6+i << "\n";
		cout << "I=" << i << " J=" << 5+i << "\n";
		cout << "I=" << i << " J=" << 4+i << "\n";
	}
	
	return 0;
}
