#include <iostream>
 
using namespace std;
 
int main() {
 
    short int A, B, PROD; //DECLARA��O DAS VARI�VEIS A, B, PROD
    
    cin >> A; //ATRIBUINDO VALORES PARA A
    cin >> B; //ATRIBUINDO VALORES PARA B
    
    PROD = A*B; //CARREGANDO O PRODUTO DE A*B NA VARI�VEL PROD
    
    cout << "PROD = " << PROD <<endl; //IMPRIMINDO EM TELA O VALOR DE PROD
 
    return 0;
}