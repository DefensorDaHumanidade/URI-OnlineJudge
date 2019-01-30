#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DO 'pow' e 'sqrt'

using namespace std;

int main(){

	double x1, y1; 	//POSIÇÃO DO PRIMEIRO PONTO NOS EIXOS CARTESIANOS
	double x2, y2;	//POSIÇÃO DO SEGUNDO PONTO NOS EIXOS CARTESIANOS

	cin >> x1 >> y1;	//ATRIBUINDO VALORES PARA O PRIMEIRO PONTO
	cin >> x2 >> y2;	//ATRIBUINDO VALORES PARA O SEGUNDO PONTO

	cout << fixed << setprecision(4) << sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0)) << endl; //IMPRIMINDO EM TELA O CONSUMO MÉDIO DE GASOLINA (Y) POR QUILÔMETROS (X)

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1015