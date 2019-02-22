#include <iostream>

using namespace std;

int main(){

	short int codigo, quantidade; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> codigo >> quantidade; //INFORMANDO O PRODUTO A SER COMPRADO E SUA QUANTIDADE

	if( codigo == 1 )       cout << "Total: R$ " << 4*quantidade;
	if( codigo == 2 )       cout << "Total: R$ " << 4.5*quantidade;
	if( codigo == 3 )       cout << "Total: R$ " << 5*quantidade;
	if( codigo == 4 )       cout << "Total: R$ " << 2*quantidade;
	if( codigo == 5 )       cout << "Total: R$ " << 1.5*quantidade;

	( (codigo == 2 && (quantidade & 0x01)) || (codigo == 5 && (quantidade & 0x01))) ?  cout << "0" << endl : cout << ".00" << endl; //VERIFICANDO SE O VALOR FINAL É PAR OU ÍMPAR

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1038