#include <iostream>

using namespace std;

int main(){

	short int A, B; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> A >> B;

	B%A == 0 || A%B == 0  ? cout <<  "Sao Multiplos" << endl : cout <<  "Nao sao Multiplos" << endl; //RESPONDENDO SE OS NÚMEROS CARREGADOS SÃO MULTIPLOS OU NÃO COM BASE NO SEU RESTO

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1044