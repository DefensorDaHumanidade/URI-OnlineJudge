#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DA 'pow'

using namespace std;

int main(){
 
	double PI = 3.14159; 	//INICIANDO A VARIÁVEL π 
	double A, B, C;			//DECLARAÇÃO DAS VARIÁVEIS A, B, C

	cin >> A >> B >> C; //ATRIBUINDO VALORES PARA AS VARIÁVEIS DECLARADAS

	cout << "TRIANGULO: " << fixed << setprecision(3) << A*C/2.0 		<< endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA DO TRIÂNGULO
	cout << "CIRCULO: "   << fixed << setprecision(3) << PI*pow(C, 2.0) << endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA DA CIRCUNFERÊNCIA
	cout << "TRAPEZIO: "  << fixed << setprecision(3) << (A+B)*C/2.0 	<< endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA DO TRAPÉZIO
	cout << "QUADRADO: "  << fixed << setprecision(3) << pow(B, 2.0) 	<< endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA DO QUADRADO
	cout << "RETANGULO: " << fixed << setprecision(3) << A*B			<< endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA DO RETÂNGULO

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1012