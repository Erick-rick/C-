#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float hrTrabalhada, valorHr, sal_bruto,IR, INSS, sal_liquido;

        sal_bruto = hrTrabalhada * valorHr;

        INSS = (sal_bruto/ 100 )* 11;

        cout << "Digite as horas trabalhas:" << endl;
        cin >>hrTrabalhada;    
    

    //Inss
        if (sal_bruto <= 800){
            INSS = (sal_bruto / 100 )* 7.65; 
        }
        else if( sal_bruto < 900.01 && sal_bruto <= 1334.07){
            INSS =(sal_bruto / 100 )* 9;
        }
        else if (sal_bruto > 1334.09 && sal_bruto <= 2668.15){
            INSS =(sal_bruto / 100 )* 11;  
        }
        else{
            INSS = sal_bruto - 293.50;
        }


    //Imposto de Renda
        if ( sal_bruto < 2512){
            IR = (sal_bruto / 100 )* 15;
        }else {
           IR = (sal_bruto / 100 )* 27.5 ;      
        }
		
		

        sal_liquido = sal_liquido - INSS - IR;

        cout << "Salario liquido = "<< sal_liquido << endl;
		
	return 0;
}