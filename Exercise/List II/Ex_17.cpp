#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float pe;
    int id = 0;
    string co;

        cout << "Digite o valor do produto : " << endl;
        cin >> pe;    
    
		cout << "Selecione o codigo de origem :\n(1) \n(2) \n(3)  \n(4)" << endl;
        cin >>id;
		
				   
        if (id == 1){
           cout << "Sul"<< endl; 
        }
        else if( id == 2){
            cout << "Sudeste"; 
        }
        else if (id == 3){
           cout <<"Centro-oeste";   
        }
        else{
            cout <<"Norte";
        }
		
	return 0;
}