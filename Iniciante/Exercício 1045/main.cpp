#include <iostream>
#include <stdlib.h> //BIBLIOTECA DO 'qsort'

using namespace std;

int comparacao(const void * a, const void * b){ 
	return ( *(double*)a - *(double*)b ); 
}

int main(){

	double A, B, C, ordenar[3]; //DECLARAÇÃO DAS VARIÁVEIS
	int i;

	for( i = 0; i < sizeof(ordenar)/sizeof(ordenar[0]); i++ ){
		cin >> ordenar[i]; 		 //CARREGANDO AS ENTRADAS EM 'ordenar'
	}

	qsort(ordenar, sizeof(ordenar)/sizeof(ordenar[0]), sizeof(double), comparacao);

	A = ordenar[2];	B = ordenar[1];	C = ordenar[0]; //ORDENANDO OS VALORES DO MAIOR PARA O MENOR

	if( A >= B+C ){
		cout << "NAO FORMA TRIANGULO" << endl;
	}else{
		if( A*A == B*B+C*C )														cout << "TRIANGULO RETANGULO" << endl; 
		if( A*A > B*B+C*C )     													cout << "TRIANGULO OBTUSANGULO" << endl; 
		if( A*A < B*B+C*C )	    													cout << "TRIANGULO ACUTANGULO" << endl; 
		if( A == B && B == C)   													cout << "TRIANGULO EQUILATERO" << endl; 		
		if( (A == B && A !=C) || (B == C && B != A) || (A == C && A != B) )	        cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1045