#include <iostream>

using namespace std;

int main(){

	unsigned long int N; 	//DECLARAÇÃO DA VARIÁVEL 'N'

	cin >> N;				//ATRIBUINDO A QUANTIDADE DE DINHEIRO REQUISITADA NA VARIÁVEL 'N'

	cout << N << endl; 		//IMRPIMINDO A VARIÁVEL DE ENTRADA

	N/100 > 0	?			cout << N/100 << " nota(s) de R$ 100,00" << endl : cout << "0 nota(s) de R$ 100,00" << endl;	if(N/100 > 0)	N=N-N/100*100;
	N/50 > 0	?			cout << N/50 << " nota(s) de R$ 50,00" << endl	 : cout << "0 nota(s) de R$ 50,00" << endl;		if(N/50 > 0)	N=N-N/50*50;
	N/20 > 0	?			cout << N/20 << " nota(s) de R$ 20,00" << endl	 : cout << "0 nota(s) de R$ 20,00" << endl;		if(N/20 > 0)	N=N-N/20*20;
	N/10 > 0	?			cout << N/10 << " nota(s) de R$ 10,00" << endl	 : cout << "0 nota(s) de R$ 10,00" << endl;		if(N/10 > 0)	N=N-N/10*10;
	N/5 > 0		?			cout << N/5 << " nota(s) de R$ 5,00" << endl	 : cout << "0 nota(s) de R$ 5,00" << endl;		if(N/5  > 0)	N=N-N/5*5;
	N/2 > 0		?			cout << N/2 << " nota(s) de R$ 2,00" << endl	 : cout << "0 nota(s) de R$ 2,00" << endl;		if(N/2  > 0)	N=N-N/2*2;
	N/1 > 0		?			cout << N/1 << " nota(s) de R$ 1,00" << endl	 : cout << "0 nota(s) de R$ 1,00" << endl;		if(N/1  > 0)	N=N-N/1*1;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1018