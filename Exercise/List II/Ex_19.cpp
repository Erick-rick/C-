#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
 
    int dh, mh, ah, dn, mn, an, idade;

        cout << "Digite o dia atual" << endl;
        cin >> dh;
		cout << "Digite o mes atual" << endl;
        cin >> mh; 
		cout << "Digite o ano atual" << endl;
        cin >> ah; 
		
		
		cout << "Digite seu dia de nascimento" << endl;
        cin >> dn; 
		cout << "Digite seu mes de nascimento" << endl;
        cin >> mn; 
		cout << "Digite seu ano de nascimento" << endl;
        cin >> an;     

				   
        idade= ah -an;
       
       
		cout <<"Voce tem " << idade <<" anos " << endl;
     
		
	return 0;
}