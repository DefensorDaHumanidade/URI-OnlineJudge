#include <iostream>

using namespace std;

int main(){

	int HoraInicial, MinutoInicial, HoraFinal, MinutoFinal; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> HoraInicial >> MinutoInicial >> HoraFinal >> MinutoFinal; //INFORMANDO OS HORÁRIOS INICIAIS E FINAIS

    HoraInicial *= 60;					//'HoraInicial' RECEBE 'HoraInicial' MULTIPLICADO POR 60
    HoraFinal *= 60;					//'HoraFinal' RECEBE HORA FINAL MULTIPLICADO POR 60
    MinutoInicial += HoraInicial;		//ATRIBUINDO A 'HoraInicial' CONVERTIDA EM MINUTOS PARA A VARIÁVEL 'MinutoInicial'
    MinutoFinal += HoraFinal;			//ATRIBUINDO A 'HoraFinal' CONVERTIDA EM MINUTOS PARA A VARIÁVEL 'MinutoFinal'

    if (MinutoFinal <= MinutoInicial)        MinutoFinal+= 24*60; //REALIZANDO AJUSTE DE VIRADA DE DIA

	cout << "O JOGO DUROU " << (MinutoFinal-MinutoInicial)/60 << " HORA(S) E " << (MinutoFinal-MinutoInicial)%60  << " MINUTO(S)" << endl;
    return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1047