#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	short int X; 	//X = a distância total percorrida em quilômetros
	double Y;		//Y = total de combustível gasto

	cin >> X >> Y;	//ATRIBUINDO VALORES PARA AS VARIÁVEIS DECLARADAS

	cout << fixed << setprecision(3) << X/Y  << " km/l" << endl; //IMPRIMINDO EM TELA O CONSUMO MÉDIO DE GASOLINA (Y) POR QUILÔMETROS (X)

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1014