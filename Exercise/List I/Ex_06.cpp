#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int an, aa, idade;
	
	cout <<"Digite o ano de nascimento : " << endl; 
	cin >> an;
	
	cout <<"Digite o ano atual : " << endl; 
	cin >> aa;

	
	idade = aa - an;
	
	cout <<"Sua idade e :  " << idade << endl;
	
	
	return 0;
}