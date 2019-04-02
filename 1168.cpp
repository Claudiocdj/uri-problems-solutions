#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	
	int n, led;
	string x;
	
	int ledMap[10];
	
	ledMap[0] = 6;
	ledMap[1] = 2;
	ledMap[2] = 5;
	ledMap[3] = 5;
	ledMap[4] = 4;
	ledMap[5] = 5;
	ledMap[6] = 6;
	ledMap[7] = 3;
	ledMap[8] = 7;
	ledMap[9] = 6;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		
		led = 0;
		
		for(int j = 0; j < x.length(); j++)
			led += ledMap[(int)x[j] - 48];
		
		cout << led << " leds\n";
	}
	
	return 0;
}
