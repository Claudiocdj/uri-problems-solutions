#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int a,maior = 0,pos;
	
	for(int i = 1; i <= 100; i++){
			
		cin >> a;
		
		if(a > maior){
			maior = a;
			pos = i;
		}
	}
	
	cout << maior << "\n" << pos << "\n";
	
	return 0;
}
