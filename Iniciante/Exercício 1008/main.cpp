#include <iostream>
#include<iomanip> //BIBLIOTECA DO 'setprecision'
 
using namespace std;
 
int main() {
 
    short int NUMERO;	//REPRESENTA O NÚMERO DO FUNCIONÁRIO
	short int HORAS;	//REPRESENTA A QUANTIDADE DE HORAS TRABALHADAS PELO FUNCIONÁRIO
	double SALARIO; 	//REPRESENTA O SALÁRIO DO FUNCIONARIO POR HORAS TRABALHADAS
    
    cin >> NUMERO >> HORAS >> SALARIO; //ATRIBUINDO VALORES PARA AS VARIÁVEIS DECLARADAS	
    
	cout << "NUMBER = " << NUMERO << endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << HORAS*SALARIO << endl; //IMPRIMINDO EM TELA O SALÁRIO TOTAL DO FUNCIONÁRIO
 
    return 0;
}