#include <iostream>

using namespace std;

int main(){
	
	//obs: i <= 2.1 por algum erro do C++
    for(float i = 0, j = 1; i <= 2.1; i += 0.2){
            cout << "I=" << i << " " << "J=" << 1+i << "\n";
            cout << "I=" << i << " " << "J=" << 2+i << "\n";
            cout << "I=" << i << " " << "J=" << 3+i << "\n";
    }
    return 0;
}
