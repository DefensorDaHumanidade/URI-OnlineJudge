#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DO 'pow'
 
using namespace std;
 
int main() {
 
    double PI = 3.14159; //INICIANDO A VARI�VEL p 
    double raio, area; //DECLARA��O DAS VARI�VEIS RAIO E AREA
    
    cin >> raio; //ATRIBUINDO VALORES PARA O RAIO
    
    area = PI*pow(raio, 2.0); //CALCULANDO A �REA DA CIRCUFER�NCIA: area = p * raio�
    
    cout << fixed << setprecision(4);
    cout << "A=" << area <<endl; //IMPRIMINDO EM TELA O VALOR DA �REA 
 
    return 0;
}

//EXERC�CIO DO 'URI - ONLINE JUDGE', PROBLEMA N�MERO: 1002