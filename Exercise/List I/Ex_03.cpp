#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float preco, d, novo;
	
	cout <<"Digite o valor do produto : "; 
	cin >> preco;
	
	
	d = (preco * 5 /100);
	novo = preco - (preco * 5 /100);
	
	cout <<"O preco do produto  = " << preco << endl;
	cout <<" com 5% desconto = "<< novo ;
	
	return 0;
}