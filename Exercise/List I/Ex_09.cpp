#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float val_dolar, val_real, cot;
	
	cout <<"Digite a quantidade de dolar no cofre : " << endl; 
	cin >> val_dolar;
	
	cout <<"Digite a cotação do dolar" << endl; 
	cin >> cot;
	
	
	val_real = val_dolar * cot;
	
	cout <<"O valor em reais :  " << val_real << endl;
	
	
	return 0;
}