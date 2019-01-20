#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DA 'pow'

using namespace std;

int main(){

	double PI = 3.14159; 	//INICIANDO A VARIÁVEL π 
	double raio, volume; 	//REPRESENTA O RAIO E DO VOLUME

	cin >> raio; //ATRIBUINDO VALORES PARA O RAIO

	volume = (4.0/3.0)*PI*pow(raio, 3.0); //CALCULANDO O VOLUME DA ESFERA: volume =(4/3) * π * R³

	cout << "VOLUME = " << fixed << setprecision(3) << volume <<endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA 

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1011