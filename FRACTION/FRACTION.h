#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
  using namespace std;

  class Fraction{
  private:
      int num;
      int deno;
  public:
    Fraction();
    Fraction(int num, int deno);
    void setnum(int num);
    void setdeno(int deno);
    int getnum() const;
    int getdeno() const;
    void show() const;
    void type();
    Fraction sum(const Fraction &F) const;
    Fraction subtract(const Fraction &F) const;
    Fraction multiply(const Fraction &F) const;
    Fraction division(const Fraction &F) const;
    };
#endif // FRACTION_H
