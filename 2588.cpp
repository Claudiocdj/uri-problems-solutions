#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int Find(vector<char> v, char c){
	for(int i = 0; i < v.size(); i++){
		if(v[i] == c)
			return i;
	}
	
	return -1;
}

int main(){
	
	string s;
	
	int id;
	
	while (cin >> s){
		
		vector<char> v;
		for(int i = 0; i < s.length(); i++){
			
			id = Find(v, s[i]);
			
			if( id >= 0 )
				v.erase(v.begin()+id);
			
			else
				v.push_back(s[i]);
		}
		
		if(v.size() == 0)
			cout << 0 << endl;
		else
			cout << v.size() - 1 << endl;
	}
	return 0;
}


