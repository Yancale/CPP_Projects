#pragma once
class Fraction
{
public:
	Fraction(int nominator, int denominator);
	~Fraction();
	int getNominator() const;
	int getDenominator() const;
	Fraction operator* (const Fraction &other) const;
	Fraction operator* (int num) const;
	Fraction operator/ (const Fraction &other) const;
	Fraction operator/ (int num) const;
	Fraction operator+ (const Fraction &other) const;
	Fraction operator+ (int num) const;
	Fraction operator- (const Fraction &other) const;
	Fraction operator- (int num) const;
	void operator- ();
	void operator*= (Fraction &other);
	void operator*= (int num);
	void operator/= (Fraction &other);
	void operator/= (int num);
	void operator+= (Fraction &other);
	void operator+= (int num);
	void operator-= (Fraction &other);
	void operator-= (int num);
	void printFrac();
	float toFloat()const;
	//declration to the operators, get methods, print method, convert Fracton to Float method c'tors and d'tors.
private:
	int m_nominator;
	int m_denominator;
	void setNominator(int num);
	void setDenominator(int num);
	void reduction();
	friend Fraction operator* (int num, const Fraction &frac);
	friend Fraction operator/ (int num, const Fraction &frac);
	friend Fraction operator+ (int num, const Fraction &frac);
	friend Fraction operator- (int num, const Fraction &frac);
	friend void operator*= (float &num, Fraction &frac);
	friend void operator/= (float &num, Fraction &frac);
	friend void operator+= (float &num, Fraction &frac);
	friend void operator-= (float &num, Fraction &frac);
	//declration to private members, set methods , reduction method and friend declration to global functions using friend. these methods and members are private (we dont want someone outside this class to use them).
};
