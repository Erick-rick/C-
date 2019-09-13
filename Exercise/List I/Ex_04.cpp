#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float pr, d, pag, novo;
	
	cout <<"Digite o valor do produto" << endl; 
	cin >> preco;
	
	cout <<"Digite o desconto do produto" << endl; 
	cin >> d;

	
	pag= (pr * d /100);
	novo = pr - (pr * d /100);
	
	cout <<"O preco do produto é  " << preco << " com 5% desconto == " << novo << endl;
	cout << "Com desconto de " << d << "%" << endl;
	cout << "Total : " << novo <<endl;
	
	return 0;
}