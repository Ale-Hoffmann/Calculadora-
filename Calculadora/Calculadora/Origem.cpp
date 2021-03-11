#include<iostream>
#include"Calculadora.h"
using namespace std;
int main()
{
	Calculadora* calc = new Calculadora;
	cout << "A soma dos valores 10 + 5 eh igual a " << calc->soma(10.0f, 5.0f) << endl;
	cout << "A subtracao dos valores 10 - 5 eh igual a " << calc->subtracao(10.0f, 5.0f) << endl;
	cout << "A Multiplicacao dos valores 10 * 5 eh igual a " << calc->multiplicacao(10.0f, 5.0f) << endl;
	cout << "A Divisao dos valores 10 / 5 eh igual a " << calc->divisao(10.0f, 5.0f) << endl;

	system("pause");
	return 1;
}