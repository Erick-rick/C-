#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float cl;
	
	cout <<"Digite o valor da conta de luz" << endl; 
	cin >> cl;
	
	if (cl >= 50){
		cout << "Seu gasto esta alto!"<< endl;
	} 
	else{
		cout <<"Gasto na media " << cl << endl;
	}
	return 0;
}