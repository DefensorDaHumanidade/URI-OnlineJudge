#include <iostream>

using namespace std;

int main(){

	int DIAS; 		//DECLARAÇÃO DA VARIÁVEL 'DIAS'

	cin >> DIAS;	//QUANTIDADE DE 'DIAS' CORRESPONDENTES A IDADE DE UMA PESSOA

	DIAS/365 > 0	?	cout << DIAS/365 << " ano(s)" << endl	: cout << "0 ano(s)" << endl;		if(DIAS/365 > 0)	DIAS=DIAS-DIAS/365*365;
	DIAS/30 > 0		?	cout << DIAS/30 << " mes(es)" << endl	: cout << "0 mes(es)" << endl;		if(DIAS/30 > 0)		DIAS=DIAS-DIAS/30*30;
	cout << DIAS << " dia(s)" << endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1020