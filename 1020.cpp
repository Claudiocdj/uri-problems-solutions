#include <iostream>

using namespace std;
	
int main(){
	
	int x;
	
	cin >> x;
	
	cout << x/365 << " ano(s)\n";
	cout << (x%365)/30 << " mes(es)\n";
	cout << (x%365)%30 << " dia(s)\n";
}
