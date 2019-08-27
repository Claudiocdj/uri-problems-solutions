#include <iostream>

using namespace std;

int main(){
	
	int t, n, m;
	
	cin >> t;
	
	while(t--){
		cin >> n >> m;
		
		int v[n];
		
		for(int i = 0; i < n; i++)
			cin >> v[i];
		
		int pd[m+1];
		
		pd[0] = 0;
		
		for(int i = 1; i <= m; i++){
			pd[i] = 99999999;
			
			for(int j = 0; j < n; j++)
				if(i - v[j] >= 0)
					pd[i] = min(pd[i], pd[i - v[j]] + 1);
		}
		
		cout << pd[m] << endl;
	}
	return 0;
}
