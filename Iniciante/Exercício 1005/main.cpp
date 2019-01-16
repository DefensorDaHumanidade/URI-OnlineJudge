#include <iostream>
#include<iomanip> //BIBLIOTECA DO 'setprecision'
 
using namespace std;
 
int main() {
 
	double A, B, MEDIA ; //DECLARAÇÃO DAS VARIÁVEIS A, B, MEDIA
    
	cin >> A; //ATRIBUINDO VALORES PARA A
	if (A<0 && A>10)   return 1; //O PROGRAMA RETORNA 1 CASO A NÃO ESTEJA NO LIMITE ESTIPULADO ENTRE 0 E 10
	cin >> B; //ATRIBUINDO VALORES PARA B
	if (B<0 && B>10)   return 1; //O PROGRAMA RETORNA 1 CASO B NÃO ESTEJA NO LIMITE ESTIPULADO ENTRE 0 E 10    
    
	MEDIA  = ((A*3.5)+(B*7.5))/11; //CARREGANDO O PRODUTO DE A*B NA VARIÁVEL MEDIA COM SEUS RESPECTIVOS PESOS
    
	cout << "MEDIA = "<< fixed << setprecision(5) << MEDIA << endl; //IMPRIMINDO EM TELA O VALOR DA MEDIA
 
	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1005