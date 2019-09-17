#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float ct, vg1, vg2;
	int tc;
	
	cout <<"Selecione o tipo de gasolina (1)gasolina (2)alcool :" << endl; 
	cin >> tc;
	
	cout <<"Digite a capacidade do tanque" << endl; 
	cin >> ct;
	
	vg1 = ct * 1.80;
	vg2 = ct * 1;
	
	if (tc ==1){
		cout << "O valor ser gasto sera : "<< vg1 << endl;
	} 
	else{
		cout <<"O valor ser gasto sera : "<< vg2<< endl;
	}
	return 0;
}