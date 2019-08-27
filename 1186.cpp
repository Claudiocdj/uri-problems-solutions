#include <iostream>

using namespace std;

int main(){
	
	float M[12][12], r = 0;
	
	char o;
	
	cin >> o;
	
	for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
            
            if(j > 11 - i)
                r += M[i][j];
    	}
   
	if(o == 's')
		cout << r << endl;
	else
		cout << r/66.0 << endl;
	
	return 0;
}
