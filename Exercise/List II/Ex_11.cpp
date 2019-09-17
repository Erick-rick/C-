#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    char CL;

        cout << "Digite o codigo do livro:" << endl;
        cin.get(CL);   
        CL = toupper(CL);

        if (CL == 'A'){
            cout <<"Livro de Ficcao";
        }else if(CL == 'B'){
           cout << "Nao ficcao";
        }else{   
            cout << "Codigo invalido!!!";
        }

	return 0;
}