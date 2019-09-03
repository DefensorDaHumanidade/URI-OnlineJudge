#include <iostream>

using namespace std;

int main(){

	short int HoraInicial, HoraFinal; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> HoraInicial >> HoraFinal;

	if( HoraInicial == HoraFinal)		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	if( HoraInicial > HoraFinal)		cout << "O JOGO DUROU " << 24 - HoraInicial + HoraFinal << " HORA(S)" << endl;
	if( HoraInicial < HoraFinal)		cout << "O JOGO DUROU " << HoraFinal - HoraInicial << " HORA(S)" << endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1046