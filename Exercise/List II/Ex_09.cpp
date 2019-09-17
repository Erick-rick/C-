#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float sal, sal_novo;

        cout << "Digite o salario do funcionario :" << endl;
        cin >> sal;   

        if (sal<= 500){
            sal_novo = sal * 0.15f;
        }else if(sal >500  && sal <= 1000){
            sal_novo = sal * 0.10f;
        }else{   // > 1000
            sal_novo = sal * 0.05f;
        }
    
    cout << "Novo salario >>>" << sal_novo + sal <<endl;

	return 0;
}

