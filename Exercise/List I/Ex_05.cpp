#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float preco, precof, desc;
	
	
	cout <<"Digite o preco do produto " << endl; 
	cin >> preco;
	cout <<"Digite o preco com desconto: " << endl; 
	cin >> precof;

	
	desc =preco - precof;
	
	cout <<"Deve um desconto de  " << desc << "%"<< endl;	
	
	return 0;
}