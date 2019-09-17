#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float temp;

        cout << "Digite a temperatura:" << endl;
        cin >>temp;    
    
        if (temp < 100){
            cout <<"Temperatura esta muito baixa  >> " << temp <<endl;
        }else if (temp >= 100 && temp <= 200){
           cout << "Temperatura esta normal  >> "<< temp <<endl;       
        }else{
			cout <<"Temperatura esta alta >> "<< temp << endl;
		}
		
	return 0;
}