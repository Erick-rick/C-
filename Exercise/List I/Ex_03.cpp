#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float preco, d, novo;
	
	cout <<"Digite o valor do produto" << endl; 
	cin >> preco;
	
	
	d = (preco * 5 /100);
	novo = preco - (preco * 50 /100);
	
	cout <<"O preco do produto é  " << preco << " com 5% desconto == " << novo << endl;

	
	return 0;
}