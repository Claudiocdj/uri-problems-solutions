#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, aux = 0;
	
	cin >> a;
	
	for(int i = 0; i < 1000; i++){
		if(aux == a){
			aux = 1;
			cout << "N[" << i << "] = 0\n";
		}
		else{
			cout << "N[" << i << "] = " << aux << "\n";
			aux++;
		}
	}
}
