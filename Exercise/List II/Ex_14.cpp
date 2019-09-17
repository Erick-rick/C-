#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float hrTrabalhada, valorHr, sal_bruto,IR, INSS, sal_liquido;

        sal_bruto = hrTrabalhada * valorHr;

        INSS = (sal_bruto/ 100 )* 11;

        cout << "Digite as horas trabalhas:" << endl;
        cin >>hrTrabalhada;    
    
        if (sal_bruto > 1257 && sal_bruto < 2512){
            IR = (sal_bruto / 100 )* 15;
        }else if (sal_bruto > 2512){
           IR = (sal_bruto / 100 )* 27,5 ;      
        }else{
		
		}

        sal_liquido = sal_liquido - INSS - IR;

        cout << "Salario liquido = "<< sal_liquido << endl;
		
	return 0;
}