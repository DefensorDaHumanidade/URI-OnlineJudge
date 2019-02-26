#include <iostream>
#include <stdlib.h> //BIBLIOTECA DO 'qsort'

using namespace std;

int comparacao(const void * a, const void * b){ 
	return ( *(int*)a - *(int*)b ); 
}

int main(){

	int ordenar[3], inicial[3], i; //DECLARAÇÃO DO  VETOR 'ordenar', 'inicial' E DA VARIAVEL CONTADOR 'i'

	for( i = 0; i < sizeof(ordenar)/sizeof(ordenar[0]); i++ ){
		cin >> inicial[i]; 		 //CARREGANDO AS ENTRADAS EM 'inicial'
		ordenar[i] = inicial[i]; //ATRIBINDO AS ENTRADAS DE 'inicial' PARA 'ordenar'
	}		

	qsort(ordenar, sizeof(ordenar)/sizeof(ordenar[0]), sizeof(int), comparacao);

	for( i = 0; i < sizeof(ordenar)/sizeof(ordenar[0]); i++ )		cout << ordenar[i] <<endl;
	cout << endl;
	for( i = 0; i < sizeof(inicial)/sizeof(inicial[0]); i++ )		cout << inicial[i] <<endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1042