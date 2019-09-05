#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	
	string a, b;
	
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		
		if(a.length() < b.length() ){
			cout << "nao encaixa" << endl;
			
			continue;
		}
		
		for(int i = a.size() - 1, j = b.size() - 1; i >= 0 && j >= 0; i--, j--){
			if(a[i] != b[j]){
				cout << "nao encaixa" << endl;
				
				break;
			}
			
			else if(j == 0 && a[i] == b[j])
				cout << "encaixa" << endl;
		}
	}
	
	return 0;
}
