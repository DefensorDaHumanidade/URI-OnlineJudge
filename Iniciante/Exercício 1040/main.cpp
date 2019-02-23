#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	double N1, N2, N3, N4, Exame; //DECLARAÇÃO DAS VARIÁVEIS

	cin >> N1 >> N2 >> N3 >> N4; //INFORMANDO AS NOTAS OBTIDAS PELO ALUNO

	cout << fixed << setprecision(1) << "Media: " << (0.2*N1)+(0.3*N2)+(0.4*N3)+(0.1*N4) << endl;
	
	if( (0.2*N1+0.3*N2+0.4*N3+0.1*N4) >= 7.0 )		cout << "Aluno aprovado." << endl;
	if( (0.2*N1+0.3*N2+0.4*N3+0.1*N4) < 5.0 )		cout << "Aluno reprovado." << endl;
	
	if( ((0.2*N1+0.3*N2+0.4*N3+0.1*N4) >= 5.0) && ((0.2*N1+0.3*N2+0.4*N3+0.1*N4) < 7.0) ){
		cout << "Aluno em exame." << endl;
		cin >> Exame;
		cout << "Nota do exame: " << Exame << endl;
		if( (Exame+(0.2*N1+0.3*N2+0.4*N3+0.1*N4))/2.0 >= 5.0 ){
			cout << "Aluno aprovado." << endl;
			cout << fixed << setprecision(1) << "Media final: " << (Exame+(0.2*N1+0.3*N2+0.4*N3+0.1*N4))/2.0 << endl;
		}
	}

	return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1040