#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    float pe, valor;
    int cp;

        cout << "Digite o valor do produto : " << endl;
        cin >> pe;    
    
		
		cout << "Selecione a condicao de pagamento :\n(1) a vista em dinheiro ou cheque \n(2) a vista com cartao de credito \n(3) 2x sem juros \n(4)3x com acrescimo de 10%" << endl;
        cin >>cp;
		
				   
        if (cp == 1){
            valor = pe - 0.10; 
        }
        else if( cp == 2){
            valor = pe - 0.05; 
        }
        else if (cp == 3){
            valor = pe / 2;   
        }
        else{
            valor = pe +(pe * 10/100);
        }


        cout << "Pagamento = "<< valor << endl;
		
	return 0;
}