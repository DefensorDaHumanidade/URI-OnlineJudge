#include <iostream>

using namespace std;

int main(){

	int N; 	//DECLARAÇÃO DA VARIÁVEL 'N'

	cin >> N;				//ATRIBUINDO A DURAÇÃO EM SEGUNDOS DE UM DETERMINADO EVENTO NA VARIÁVEL 'N'

	N/3600 > 0	?	cout << N/3600 << ":"	: cout << "0:";		if(N/3600 > 0)	N=N-N/3600*3600;
	N/60 > 0	?	cout << N/60 << ":"		: cout << "0:";		if(N/60 > 0)	N=N-N/60*60;
	cout << N << endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1019