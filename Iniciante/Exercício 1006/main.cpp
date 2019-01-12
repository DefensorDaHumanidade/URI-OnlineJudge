#include <iostream>
#include<iomanip> //BIBLIOTECA DO 'setprecision'
 
using namespace std;
 
int main() {
 
    double A, B, C, MEDIA ; //DECLARAÇÃO DAS VARIÁVEIS A, B, C, MEDIA
    
    cin >> A; //ATRIBUINDO VALORES PARA A
    if (A<0 && A>10)   return 1; //O PROGRAMA RETORNA 1 CASO A NÃO ESTEJA NO LIMITE ESTIPULADO ENTRE 0 E 10
    cin >> B; //ATRIBUINDO VALORES PARA B
    if (B<0 && B>10)   return 1; //O PROGRAMA RETORNA 1 CASO B NÃO ESTEJA NO LIMITE ESTIPULADO ENTRE 0 E 10   
	cin >> C; //ATRIBUINDO VALORES PARA C
    if (C<0 && C>10)   return 1; //O PROGRAMA RETORNA 1 CASO C NÃO ESTEJA NO LIMITE ESTIPULADO ENTRE 0 E 10  	
    
    MEDIA  = ((A*2)+(B*3)+(C*5))/10; //CARREGANDO O PRODUTO DE A*B*C NA VARIÁVEL MEDIA COM SEUS RESPECTIVOS PESOS
    
    cout << "MEDIA = "<< fixed << setprecision(1) << MEDIA << endl; //IMPRIMINDO EM TELA O VALOR DA MEDIA
 
    return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1006