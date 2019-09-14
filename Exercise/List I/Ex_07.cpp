#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float r, vol;
	
	cout <<"Digite o raio da esfera : " << endl; 
	cin >> r;
	
	
	vol = (4 * 3.14 * r)/3 ;
	
	cout <<"O volume da esfera e :  " << vol << endl;
	
	
	return 0;
}