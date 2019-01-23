#include <iostream>

using namespace std;

int main(){

	short int A, B, C, MaiorAB, MaiorC; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> A >> B >> C; //ATRIBUINDO VALORES PARA AS VARIÁVEIS DECLARADAS A, B, C

	MaiorAB = (A+B+abs(A-B))/2; //CÁLCULO PARA DESCOBRIR O MAIOR VALOR ENTRE A e B

	MaiorC = (MaiorAB+C+abs(MaiorAB-C))/2; //CÁLCULO PARA DESCOBRIR O MAIOR VALOR ENTRE O MAIOR ENTRE A e B e O VALOR DE C

	cout << MaiorC << " eh o maior" << endl; //IMPRIMINDO EM TELA O MAIOR VALOR DENTRE A, B, C

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1013