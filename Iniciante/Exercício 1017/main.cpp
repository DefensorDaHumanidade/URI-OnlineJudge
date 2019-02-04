#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	short int TEMPO, VELOCIDADE; 	//DECLARAÇÃO DA VARIÁVEL 'TEMPO' E 'VELOCIDADE'

	cin >> TEMPO >> VELOCIDADE;		//ATRIBUINDO VALORES PARA O 'TEMPO' E PARA A 'VELOCIDADE'

	cout << fixed << setprecision(3) << TEMPO*VELOCIDADE/12.0 << endl; //TEMPO RESTANTE PARA UM CARRO ALCANÇAR O OUTRO

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1017