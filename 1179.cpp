#include <iostream>
#include <vector>

using namespace std;

void vectorPrint(vector<int> &v, char *type){
	
	for(int i = 0; i < v.size(); i++)
		cout << type << "[" << i << "] = " << v[i] << "\n";
	
	v.clear();
}

int main(){
	
	vector<int> par, impar;
	int n;
	
	for(int i = 0; i < 15; i++){
		cin >> n;
		
		if(n%2 == 0){
			par.push_back(n);
			
			if(par.size() == 5)
				vectorPrint(par,"par");
		}
		else{
			impar.push_back(n);
			
			if(impar.size() == 5)
				vectorPrint(impar,"impar");
		}
	}
	
	vectorPrint(impar,"impar");
	vectorPrint(par,"par");
	
	return 0;
}
