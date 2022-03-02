#pragma once
class Fraction
{
private:
 int numerator;
 int denominator;
public:
 int  getNumerator  () const { return numerator;   };
 int  getDenominator() const { return denominator; };
 bool setNumerator  (const int);
 bool setDenominator(const int);
 bool Init(const int, const int);
 void Read       ();
 void Display    ();
 bool Reduce     ();
 double Calculate();
};
