#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int ct, lt, cp, lp, qtd;
	
	
	cout <<"Digite o comprimento do tijolo: " << endl; 
	cin >> ct;
	cout <<"Digite a largura do tijolo : " << endl; 
	cin >> lt;
	
	cout <<"Digite o comprimento da parede: " << endl; 
	cin >> cp;
	cout <<"Digite a largura do tijolo: " << endl; 
	cin >> lp;
	
	qtd = (cp / ct) * (lp / lt);
	
	cout <<"Sao necessario " << qtd << " tijolos"<< endl;
	
	
	return 0;
}