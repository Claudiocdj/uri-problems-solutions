#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float a,b,c,d,m,e,f;
	
	cin >> a >> b >> c >> d;
	
	m = (a*2 + b*3 + c*4 + d)/10;
	
	cout << "Media: " << fixed << setprecision(1) << m << "\n";
	
	if(m >= 7.0)
		cout << "Aluno aprovado.\n";
		
	else if(m < 5.0)
		cout << "Aluno reprovado.\n";
		
	else{
		cin >> e;
		
		cout << "Aluno em exame.\nNota do exame: " << fixed << setprecision(1) << e << "\n";
		
		f = (e+m)/2;
		
		if(f >= 5.0)
			cout << "Aluno aprovado.\n";
		else
			cout << "Aluno reprovado.\n";
		cout << "Media final: " << fixed << setprecision(1) << f << "\n";
	}
	
	return 0;
}
