#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float area, larg, comp, per;
	
	cout <<"Calcular metro quadrado" << endl; 
	
	cout << "Digite a largura  :";
	cin >> larg ;
	
	cout << "Digite o comprimento :";
	cin >>comp;
	
	area = larg * comp;
	per = 2 *(larg + comp);
	
	cout <<"Sao " << area << " metros quadrados" << endl;
	cout <<"Perimetro : " << per ;
	
	return 0;
}
