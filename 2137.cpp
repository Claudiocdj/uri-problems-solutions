#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sortFunction(string i, string j){
	return (i < j);
}

int main(){
	
	int n;
	
	string aux;
	
	while(cin >> n){
		
		vector<string> s;
		
		for(int i = 0; i < n; i++){
			cin >> aux;
			
			s.push_back(aux);
		}
		
		sort(s.begin(), s.end(), sortFunction);
		
		for(int j = 0; j < s.size(); j++)
			cout << s[j] << endl;
	}
	
	return 0;
}


