#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DO 'pow' e 'sqrt'

using namespace std;

int main(){

	double A, B, C; //DECLARAÇÃO DAS VARIÁVEIS A, B, C

	cin >> A >> B >> C; //ATRIBUINDO VALORES AS VARIÁVEIS

	if( (B*B - 4*A*C) < 0 || (A == 0) )     //VERIFICANDO SE O DELTA É NEGATIVO
		cout << "Impossivel calcular" << endl;
	else{
		cout << fixed << setprecision(5) << "R1 = " << (-B + sqrt(B*B - 4*A*C))/(2*A) << endl; 
		cout << fixed << setprecision(5) << "R2 = " << (-B - sqrt(B*B - 4*A*C))/(2*A) << endl;
	}

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1036