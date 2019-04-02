#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n;
	char op;
	float v[12], a, soma = 0.0;
	
	cin >> n >> op;
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if(i == n){
				cin >> v[j];
				soma += v[j];
			}
			else
				cin >> a;
		}
	}
	
	if(op == 'S')
		cout << fixed << setprecision(1) << soma << "\n";
	else
		cout << fixed << setprecision(1) << soma/12.0 << "\n";
	
	return 0;
}
