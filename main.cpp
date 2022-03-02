#include <iostream>
#include "Fraction.hpp"

using namespace std;

Fraction makeFraction(int n, int d, bool &t);

int main()
{
 Fraction z;
 z.Read   ();
 z.Display();
 cout << "Скорочення... \n";
 z.Reduce ();
 z.Display();
 cout << "Ділення: " << z.Calculate() <<endl;

 int n, d;
 bool r = true;
 cout << "Введіть ч і з, де ч — чисельник, а з — знаменник"<<endl;
 cout << "ч: "; cin >> n;
 cout << "з: "; cin >> d;
 z = makeFraction(n, d, r);
 if (!r)
 {
  cerr << "ERROR: Ділення на нуль.\n";
  return -1;
 }
 z.Display();
 cout << "Скорочення... \n";
 z.Reduce ();
 z.Display();
 cout << "Ділення: " << z.Calculate() <<endl;
}

Fraction makeFraction(int n, int d, bool &r)
{
 Fraction z;
 if (!z.Init(n, d))
 {
  cout << "Неправильні значення. \n";
  r = false;
 }
 return z;
}
