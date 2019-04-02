#include <iostream>

using namespace std;

int main(){
	
	int h1,h2,m1,m2;
	int horas = 0,minutos;
	
	cin >> h1 >> m1 >> h2 >> m2;
	
	if(m1 == m2)
		minutos = 0;
	
	if(m1 < m2)
		minutos = m2 - m1;
	
	if(m1 > m2){
		minutos = (60-m1)+m2;
		horas--;
	}
	
	if(h1 == h2 && m1 == m2)
		horas = 24;
	
	if(h1 == h2 && m1 != m2)
		horas = 0;
	
	if(h1 > h2)
		horas += (24-h1)+h2;
	
	if(h1 < h2)
		horas += h2-h1;
	
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)\n";
	
	return 0;
}
