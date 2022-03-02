#include "Fraction.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

bool Fraction::setNumerator(const int n)
{
 numerator = n;
 return true;
}

bool Fraction::setDenominator(const int n)
{
 if (n)
 {
  denominator = n;
  return true;
 }
 else
 {
  denominator = 1;
  return false;
 }
}

bool Fraction::Init(const int n, const int d)
{
 return setNumerator(n) && setDenominator(d);
}

void Fraction::Read()
{
 int n;
 int d;

 do {
  cout << "Веедіть чисельник: "; cin >> n;
  cout << "Веедіть знаменник: "; cin >> d;
 } while (!Init(n, d));
}

void Fraction::Display()
{
 cout << "Чиселник: "   << numerator   << endl;
 cout << "Знаменник: "  << denominator << endl;
 if (numerator < 0 && denominator < 0 || numerator == 0)
  cout << setw(3) << abs(numerator)     << endl << "  _\n\n"
       << setw(3) << abs(denominator)   << endl;
 else
 {
  if (numerator < 0 || denominator < 0)
   cout << "  "    << setw(3) << abs(numerator) << endl << "  _ \n\n"
        << setw(3) << abs(denominator)          << endl;
  else
   cout << setw(3) << numerator   << endl << "  _ \n\n"
        << setw(3) << denominator << endl;
 }
}



bool Fraction::Reduce()
{
 int gcd;
 int first  = abs(numerator);
 int second = abs(denominator);
 if (first == 0)
 {
  gcd = second;
  denominator = denominator / gcd;
  return true;
 }
 else
 {
  if (first == 1 || second == 1)
   return false;
  else
  {
   while (first != second)
   {
    first > second ? first -= second : second -= first;
   }
    gcd = first;
  }
 }

 if (gcd == 1)
  return false;
 else
 {
  numerator   = numerator   / gcd;
  denominator = denominator / gcd;
  return true;
 }
}

double Fraction::Calculate()
{
 return (1. * numerator / denominator);
}
