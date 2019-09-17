#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float p;
	
	cout <<"Digite o preco do produto :" << endl; 
	cin >> p;
	

	if (p >= 50 && p <=100){
		cout << "Produto em promocao "<< endl;
	} 
	else{
		cout <<"Com preco normal "<< endl;
	}
	return 0;
}