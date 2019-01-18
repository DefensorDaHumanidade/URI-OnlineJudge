#include <iostream>
#include <string>
#include<iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	string NOME;		//REPRESENTA O NÚMERO DO FUNCIONÁRIO
	double SALARIO; 	//REPRESENTA O SALÁRIO FIXO DO FUNCIONÁRIO
	double VENDAS; 		//REPRESENTA O TOTAL DE VENDAS DO FUNCIONÁRIO

	cin >> NOME >> SALARIO >> VENDAS; //ATRIBUINDO VALORES PARA AS VARIÁVEIS DECLARADAS	

	cout << "TOTAL = R$ " << fixed << setprecision(2) << SALARIO+VENDAS*0.15 << endl; //IMPRIMINDO EM TELA O SALÁRIO TOTAL DO FUNCIONÁRIO

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1009