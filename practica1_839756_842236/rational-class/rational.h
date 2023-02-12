#pragma once

#include <iostream>

using namespace std;

// Solucion con atributos privados.

class Rational
{
	// Miembros
	int num, den;

	// Funciones auxiliares
	static int mcd(int a, int b);
	static int mcm(int a, int b);
	void reduce();

public:
	// Constructores
	Rational();
	Rational(int num, int den);

	// Entrada - salida
	void write(std::ostream &os) const;
	void read(std::istream &is);

	// Operadores aritmeticos
	Rational add(const Rational &that) const;
	Rational add(int i) const;

	Rational subtract(const Rational &that) const;
	Rational subtract(int i) const;

	Rational multiply(const Rational &that) const;
	Rational multiply(int i) const;

	Rational divide(const Rational &that) const;
	Rational divide(int i) const;
};

// Operadores aritmeticos
Rational add(int i, const Rational &r);
Rational subtract(int i, const Rational &r);
Rational multiply(int i, const Rational &r);
Rational divide(int i, const Rational &r);