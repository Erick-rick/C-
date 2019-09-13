#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float area, larg, comp;
	
	cout <<"Calcular metro quadrado" << endl; 
	
	cout << "Digite a largura  :";
	cin >> larg ;
	
	cout << "Digite o comprimento :";
	cin >>comp;
	
	area = larg * comp;
	
	cout <<"Sao " << area << " metros quadrados";
	
	return 0;
}