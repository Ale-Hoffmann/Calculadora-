#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
public:
	Calculadora();
	~Calculadora();

	float soma(float opA, float opB);
	float subtracao(float opA, float opB);
	float multiplicacao(float opA, float opB);
	float divisao(float opA, float opB);

};

#endif // !CALCULADORA_H