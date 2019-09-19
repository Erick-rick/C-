#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
 
    float a, b, c;

        cout << "Digite o comprimento de A" << endl;
        cin >> a;
		cout << "Digite o comprimento de B" << endl;
        cin >> b;
        cout << "Digite o comprimento de C" << endl;
        cin >> c;
		   
    	if(a == b && b == c)
    		cout << "---Equilatero!";
    	else if( a == b || b == c)
    		cout << "---Isosceles ";
    	else if (a!= b && b!= c && a!= c)
    		cout << "--- Escaleno";
       		
	return 0;
}