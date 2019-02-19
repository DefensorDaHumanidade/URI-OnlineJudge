#include <iostream>

using namespace std;

int main(){

	short int A, B, C, D; //DECLARAÇÃO DAS VARIÁVEIS A, B, C, D

	cin >> A >> B >> C >> D; //ATRIBUINDO VALORES AS VARIÁVEIS

	if((B > C) && (D > A) && ((C+D) > (A+B)) && (C > 0) && (D > 0) && !(A & 0x01)) //VERIFICANDO SE AS CONDIÇÕES SÃO SATISFEITAS
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores nao aceitos" << endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1035