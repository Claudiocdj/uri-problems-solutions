#include <iostream>
#include <cstring>
#include <string>
#include <sstream>

using namespace std;

int main(){
	
	int a,b;
	
	char *c;
	
	cin >> a >> b;
	
	while( a != 0 && b != 0){
		
		c = strtok (to_string(a + b), "0");
		
		while(c != NULL)
			cout << c;
		cout << endl;
		
		cin >> a >> b;
	}
	
	
	return 0;
}
