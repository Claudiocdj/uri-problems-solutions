#include <iostream>

using namespace std;

int main(){
	
	int d,h,m,s,df,hf,mf,sf,total;
	string dia;
	string pontos;
	
	cin >> dia >> d >> h >> pontos >> m >> pontos >> s;
	cin >> dia >> df >> hf >> pontos >> mf >> pontos >> sf;
	
	total = (df*86400 + hf*3600 + mf*60 + sf) - (d*86400 + h*3600 + m*60 + s);
	
	cout << total/86400 << " dia(s)\n";
	cout << (total%86400)/3600 << " hora(s)\n";
	cout << ((total%86400)%3600)/60 << " minuto(s)\n";
	cout << ((total%86400)%3600)%60 << " segundo(s)\n";
	
	return 0;
}
