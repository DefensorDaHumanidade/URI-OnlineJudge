#include <iostream>
#include <iomanip> //BIBLIOTECA DO 'setprecision'

using namespace std;

int main(){

	double salario; //DECLARAÇÃO DA VARIÁVEL 'salario'

	cin >> salario; //INFORMANDO O SALARIO DO FUNCIONÁRIO

    if( salario <= 400 )                    cout << "Novo salario: " << fixed << setprecision(2) << salario+salario*0.15 << endl << "Reajuste ganho: " << salario*0.15 << endl << "Em percentual: 15 \%" << endl;
    if( salario > 400 && salario <= 800)    cout << "Novo salario: " << fixed << setprecision(2) << salario+salario*0.12 << endl << "Reajuste ganho: " << salario*0.12 << endl << "Em percentual: 12 \%" << endl;
    if( salario > 800 && salario <= 1200)   cout << "Novo salario: " << fixed << setprecision(2) << salario+salario*0.10 << endl << "Reajuste ganho: " << salario*0.10 << endl << "Em percentual: 10 \%" << endl;
    if( salario > 1200 && salario <= 2000)  cout << "Novo salario: " << fixed << setprecision(2) << salario+salario*0.07 << endl << "Reajuste ganho: " << salario*0.07 << endl << "Em percentual: 7 \%" << endl;
    if( salario > 2000)                     cout << "Novo salario: " << fixed << setprecision(2) << salario+salario*0.04 << endl << "Reajuste ganho: " << salario*0.04 << endl << "Em percentual: 4 \%" << endl;

    return 0;
}

//EXERCÍCIO DO 'URI - ONLINE JUDGE', PROBLEMA NÚMERO: 1048