#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int he,me, hs,ms, hr;
	float pag, mn;
	
	cout <<"Digite a hora de entrada : " << endl; 
	cin >> he;
	cout <<"Digite o minuto de entrada : " << endl; 
	cin >> me;
	
	cout <<"Digite a hora de saida : " << endl; 
	cin >> hs;
	cout <<"Digite o minuto de saida : " << endl; 
	cin >> ms;
	
	hr = (hs - he)* 4; 		// valor da hora
	mn = (ms - me)* 0.10;  // valor do minuto
	pag = hr- mn;
	
	cout <<"Valor total : " << pag << endl;
	
	
	return 0;
}