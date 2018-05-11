#include <iostream>
#include <stdio.h>
#include <math.h>

class Complexo {
private:
	float im, real;
public:
	void Complexo(float a, float b) {
		im = a;
		real = b;
	}

	float Modulo() {
		a = sqrt(im ^ 2 + real ^ 2);
		return a;
	}
	Complexo Conjugado() {
		Complexo z;
		z.im = im;
		z.real = -real;
		return z;
	}
	Complexo Soma(Complexo z1) {
		Complexo z;
		z.im = z1.im + im;
		z.real = z1.real + real;
		return z;
	}

	Complexo Diferenca(Complexo z1) {
		Complexo z;
		z.im = z1.im - im;
		z.real = z1.real - real;
		return z;
	}
	Complexo Produto(Complexo z1) {
		Complexo z;
		z.im = z1.im*im - z1.real*real;
		z.real = z1.real*im + z1.im*real;
		return z;
	}
	Complexo Divisao(Complexo z1) {
		Complexo z;
		z.im = (z1.im*im + z1.real*real) / pow(z1.modulo(), 2);
		z.y = (-z1.real*im + z1.im*real) / pow(z1.modulo(), 2);
	}
};
