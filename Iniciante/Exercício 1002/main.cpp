#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'
#include <math.h>  //BIBLIOTECA DO 'pow'
 
using namespace std;
 
int main() {
 
    double PI = 3.14159; //INICIANDO A VARIÁVEL p 
    double raio, area; //DECLARAÇÃO DAS VARIÁVEIS RAIO E AREA
    
    cin >> raio; //ATRIBUINDO VALORES PARA O RAIO
    
    area = PI*pow(raio, 2.0); //CALCULANDO A ÁREA DA CIRCUFERÊNCIA: area = p * raio²
    
    cout << fixed << setprecision(4);
    cout << "A=" << area <<endl; //IMPRIMINDO EM TELA O VALOR DA ÁREA 
 
    return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1002