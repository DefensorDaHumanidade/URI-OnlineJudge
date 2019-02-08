#include <iostream>

using namespace std;

int main(){

	double N;						//DECLARAÇÃO DA VARIÁVEL 'N'
	int inteiro, Notas, Moedas;		//DECLARAÇÃO DAS VARIÁVEIS AUXILIARES

	cin >> N;						//ATRIBUINDO A QUANTIDADE DE DINHEIRO REQUISITADA NA VARIÁVEL 'N'

	inteiro = N;					//CONVERTENDO A VARIAVEL DE TIPO double PARA int
	N = 100*N;						//MULTIPLICANDO A VARIÁVEL 'N' POR 100
	Moedas = N;						//CONVERTENDO A VARIAVEL DE TIPO double MULTIPLICADA POR 100 PARA int

	cout << "NOTAS:" 	<< endl;
	cout << inteiro/100 << " nota(s) de R$ 100.00"  << endl;    Notas = (inteiro%100);
	cout << Notas/50 	<< " nota(s) de R$ 50.00" 	<< endl;    Notas = (Notas%50);
	cout << Notas/20 	<< " nota(s) de R$ 20.00" 	<< endl;    Notas = (Notas%20);
	cout << Notas/10 	<< " nota(s) de R$ 10.00" 	<< endl;    Notas = (Notas%10);
	cout << Notas/5 	<< " nota(s) de R$ 5.00"	<< endl;    Notas = (Notas%5);
	cout << Notas/2 	<< " nota(s) de R$ 2.00"	<< endl;    Notas = (Notas%2);

	cout << "MOEDAS:" << endl;
	cout << Notas/1 	<< " moeda(s) de R$ 1.00" << endl;    Moedas = Moedas%100;
	cout << Moedas/50 	<< " moeda(s) de R$ 0.50" << endl;    Moedas = Moedas%50;
	cout << Moedas/25 	<< " moeda(s) de R$ 0.25" << endl;    Moedas = Moedas%25;
	cout << Moedas/10 	<< " moeda(s) de R$ 0.10" << endl;    Moedas = Moedas%10;
	cout << Moedas/5 	<< " moeda(s) de R$ 0.05" << endl;    Moedas = Moedas%5;
	cout << Moedas/1 	<< " moeda(s) de R$ 0.01" << endl;

	return 0;
}