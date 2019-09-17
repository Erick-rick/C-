#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int fun = 0;
    float sal;
	string nf, dep;

    while (fun < 4)
    {
        cout << "Digite o nome do funcionario :" << endl;
        cin >> nf;

        cout << "Digite o salario do funcionario :" << endl;
        cin >> sal;   

        cout << "Selecione o departamento do funcionario :\n (P)-Producao \n (E)engenharia " << endl;
        cin >> dep;

        fun += 1;
        if (sal >= 1000 && sal <= 1500)
  	        cout <<"Funcionarios com salario mais que R$1000 e menor que R$1500  >>> "<< fun<< endl;
 
    }

	return 0;
}

