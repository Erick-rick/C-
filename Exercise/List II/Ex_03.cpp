#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float h, s, pm, pf;
	
	cout <<"Digite a sua altura :" << endl; 
	cin >> h;
	
	cout <<"Digite seu sexo : [M] - masculino  [F]-Feminino " << endl; 
	cin >> s;
	
	pm = (72.7 * h) - 58; //peso masculino
	pf = (62.1 * h) - 44.7;
	
	if (s == 'm' || s == 'M'){
		cout << "Seu peso ideal e : "<< pm << endl;
	} 
	else{
		cout <<"Seu peso ideal e : " << pf << endl;
	}
	return 0;
}