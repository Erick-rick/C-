#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float pr, d, pag, novo;
	
	cout <<"Digite o valor do produto" << endl; 
	cin >> pr;
	
	cout <<"Digite o desconto do produto" << endl; 
	cin >> d;

	
	pag= (pr * d /100);
	novo = pr - (pr * d /100);
	
	cout <<"O preco do produto e :  " << pr << endl;
	cout << "Desconto de  " << d << "%" << endl;
	cout << "Total : " << novo <<endl;
	
	return 0;
}