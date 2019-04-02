#include <iostream>

using namespace std;

int main(){
	
	int count = 0, j = 7, i = 1;
	
	while(i <= 9){
		cout << "I=" << i << " J=" << j << "\n";
		
		count++;
		
		if(count == 3){
			count = 0;
			i +=2;
			j = 7;
		}
		else
			j--;
	}
	
	return 0;
}
