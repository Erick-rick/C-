#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
 
    int cp;


        cout << "Digite o codigo do produto:\n" << endl;
        cin >> cp;
		   
    	if(cp == 1)
    		cout << "Alimento nao perecivel ";
    	else if( cp ==2 && cp <= 4)
    		cout << "Alimento perecivel";
    	else if (cp >= 5 && cp <=6)
    		cout << "Vestuario";
    	else if (cp == 7)
    		cout << "Higiene pessoal";
    	else if (cp >=8 )
    		cout << "Limpeza e utensilios domestico";
        else if (cp !=0 && cp > 9 )
    		cout << "Codigo invalido";
       		
	return 0;
}