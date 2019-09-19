#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
 
    int an = 0;

        cout << "Digite sua idade: " << endl;
        cin >> an;    

				   
        if (an < 16){
           cout << "Não possui idade suficiente"<< endl; 
        }
        else if( an >= 16 && an < 18){
            cout << "Tem idade para votar"; 
        }
       
        else{
            cout <<"Tem idade para tirar cateira de habilitacao";
        }
		
	return 0;
}