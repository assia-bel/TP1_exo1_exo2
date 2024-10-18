#include "Complex.h"
#include <iostream>

Complex::Complex()
{
	this->re = 0;
	this->img = 0;

}
//c'est une façon de minimiser le nombre des steps pour la creation d'un objet avec initialized list
Complex::Complex(double r, double i):re(r),img(i)
{}

Complex::Complex(const Complex& C)
{
	this->re = C.re;
	this->img = C.img;

}


Complex* Complex::operator -(const Complex& c) const
{
	Complex* z1 = new Complex();
	z1->re = this->re - c.re,
	z1->img = this->img - c.img;
	return z1;
}

Complex* Complex::operator *(const Complex& c) const
{
	Complex* z1 = new Complex();
	z1->re = this->re * c.re - this->img * c.img;
	z1->img = this->re * c.img + this->img * c.re;
	return z1;
}


bool Complex::operator==(const Complex& c) const
{
	return (this->re == c.re) && (this->img == c.img);
}

Complex* Complex::operator+(const Complex& z) const
{
	Complex* z1 =  new Complex();
	z1->re = this->re + z.re;
	z1->img = this->img + z.img;

	return z1;

}

Complex* Complex::operator+(double d) const
{
	Complex* z1 = new Complex();
	z1->re = this->re + d;
	z1->img = this->img + 0;

	return z1;

}
Complex* operator+(double d, Complex& c)
{
	Complex* z1 = new Complex();
	z1->re =d + c.re;
	z1->img =0 + c.img;

	return z1;
}


double Complex::module() const
{
	return std::sqrt(this->re * this->re+ this->img * this->img);
}

Complex Complex::conjugue() const
{
	return Complex(this->re,-this->img);
}

Complex* Complex::operator /(const Complex& c) const
{
	//on a :  (a + bi) / (c + di) = (a + bi) * (c - di) /  c² + d²
	Complex* z1 = new Complex();
	double denominator = c.re * c.re + c.img * c.img; // c² + d²
	Complex conj = c.conjugue(); // Calcul du conjugué

	// (a + bi) * (c - di) = (a*c + b*d) + (b*c - a*d)i
	z1->re = (this->re * conj.re + this->img * conj.img) / denominator; // (a*c + b*d) / (c² + d²)
	z1->img = (this->img * conj.re - this->re * conj.img) / denominator; // (b*c - a*d) / (c² + d²)

	return z1;
}

void Complex::afficher() const
{
	if (this->img < 0)
	{
		std::cout << this->re << "- " << -this->img << "i" << std::endl;
	}
	else std::cout << this->re << "+ " << this->img << "i" << std::endl;
	

}