#pragma once
#include <cmath>
class Complex
{
private:
	double re;
	double img;
public:
    //constructeur sans parametre
	Complex();
    //constructeur avec parametre
	Complex(double, double);
    /*
    Complex(double r = 0.0, double i = 0.0);
    si on veut creer un constructeur en initialisant les valeurs de param 
    */
    //constructeur de recopie
	Complex(const Complex&);

    double module() const;
    Complex conjugue() const;
	void afficher() const;
    //surcharge des operations
    Complex* operator +(const Complex&) const;  //complex + complex
    Complex* operator +(double r) const; // complex + double
    Complex* operator -(const Complex& c) const;
    Complex* operator *(const Complex& c) const;
    Complex* operator /(const Complex& c) const;
    bool  operator ==(const Complex& c) const;

    friend Complex* operator +(double, Complex&);// double+complex
    
};