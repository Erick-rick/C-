#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float A, B, C, D;
	
	cout <<"Digite o valor para A : " << endl; 
	cin >> A;
	
	cout <<"Digite o valor para B" << endl; 
	cin >> B;
	
	C = (A + B)* B;
	D = (C * B) / (A * A);
	
	A = D/ (C + B);
	B = B + A;
	
	cout <<"A vale : >>" << A << endl;
	cout <<"B vale : >>" << B << endl;
	cout <<"C vale : >>" << C << endl;
	cout <<"D vale : >>" << D << endl;
	
	
	return 0;
}