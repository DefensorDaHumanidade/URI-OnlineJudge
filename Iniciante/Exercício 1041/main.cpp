#include <iostream>

using namespace std;

int main(){

	double x, y; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> x >> y; //INFORMANDO AS POSSIÇÕES DO X E DO Y

	if( x ==  0   && y ==  0 )			cout << "Origem" << endl;
	if( x !=  0   && y ==  0 )			cout << "Eixo X" << endl;
	if( x ==  0   && y !=  0 )			cout << "Eixo Y" << endl;
	if( x >=  0.1 && y >=  0.1 )		cout << "Q1" << endl;
	if( x <= -0.1 && y >=  0.1 )		cout << "Q2" << endl;
	if( x <= -0.1 && y <= -0.1 )		cout << "Q3" << endl;
	if( x >=  0.1 && y <= -0.1 )		cout << "Q4" << endl;

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1041