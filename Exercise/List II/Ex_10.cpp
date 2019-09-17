#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    unsigned int A= 1, B= 1;

        cout << "Digite o valor de A:" << endl;
        cin >>A;  

        cout << "Digite o valor de B:" << endl;
        cin >>B;   
        

        if (A == B){
            cout <<"A + B >>> " << A + B <<endl;
        }else if (A < B){
           cout << "Diferenca de A e B  >>> "<< B - A<<endl;       
        }else{
			cout <<"Diferenca de B e A >> "<< A - B << endl;
		}
		
	return 0;
}
