#include <iostream>
 
using namespace std;
 
int main() {
 
    short int A, B, C, D, DIFERENCA; //DECLARAÇÃO DAS VARIÁVEIS A, B, C, D, DIFERENCA 
    
    cin >> A >> B >> C >> D; //ATRIBUINDO VALORES PARA A, B, C, D 	
    
    DIFERENCA = (A * B - C * D); //CALCULANDO A DIFERENÇA DO PRODUTO A*B PELO PRODUTO DE C*D NA VARIÁVEL DIFERENCA
    
    cout << "DIFERENCA = " << DIFERENCA << endl; //IMPRIMINDO EM TELA O VALOR DA DIFERENCA
 
    return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1007