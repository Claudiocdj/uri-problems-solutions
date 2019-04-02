#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int n,j,c=0,s=0,r=0;
	float total;
	char cobaia;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cin >> j >> cobaia;
		
		if(cobaia == 'C')
			c += j;
		else if(cobaia == 'R')
			r += j;
		else if(cobaia == 'S')
			s += j;
	}
	
	total = c+r+s;
	
	cout << "Total: " << total << " cobaias\n";
	cout << "Total de coelhos: " << c << "\n";
	cout << "Total de ratos: " << r << "\n";
	cout << "Total de sapos: " << s << "\n";
	cout << "Percentual de coelhos: "<< fixed << setprecision(2) << (c/total)*100.00 << " %\n";
	cout << "Percentual de ratos: "<< fixed << setprecision(2) << (r/total)*100.00 << " %\n";
	cout << "Percentual de sapos: "<< fixed << setprecision(2) << (s/total)*100.00 << " %\n";
	
	return 0;
}
