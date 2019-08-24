#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int t, n;
	
	string s;
	
	cin >> t;
	
	while(t--){
		cin >> n;
		
		int num = 0;
		
		for(int i = 0; i < n; i++){
			cin >> s;
			
			for(int j = 0; j < s.length(); j++)
				num += i + j + (s[j] - 65);
		}
		cout << num << endl;
	}
	
	return 0;
}
