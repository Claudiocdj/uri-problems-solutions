#include <iostream>

using namespace std;

int main(){
	
	float M[12][12];
	
	char o;
	
	cin >> o;
	
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 12; j++)
			cin >> M[i][j];
			
	float r = 0.0;
	
	int k = 0;

	for(int i = 1; i < 12; i++)
		for(int j = 0; j < i; j++){
			r += M[i][j];
			
			k++;
		}
			
	
	if(o == 's')
		cout << r << endl;
	else
		cout << r/k << endl;
	
	return 0;
}
