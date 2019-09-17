#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	string nome;
	float vm;
	
	cout <<"Digite o valor de vendas do mes do vendedor :" << endl; 
	cin >> vm;
	

	if (vm >= 1000 && vm <=5000){
		cout << "Parabens! Meta alcancada "<< endl;
	} 
	else{
		cout <<"Lamento! Meta não alcancada "<< endl;
	}
	return 0;
}