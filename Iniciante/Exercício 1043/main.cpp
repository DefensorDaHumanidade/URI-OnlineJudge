#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	double A, B, C; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> A >> B >> C;

	if ( ((A+B) > C) && ((A+C) > B) && ((B+C) > A)){	//CONDIÇÃO DE EXISTÊNCIA PARA UM TRIÂNGULO
		cout << fixed << setprecision(1) << "Perimetro = " << A+B+C << endl;
	}else{
		cout << fixed << setprecision(1) << "Area = " <<((A+B)/2)*C << endl;
	}

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1043