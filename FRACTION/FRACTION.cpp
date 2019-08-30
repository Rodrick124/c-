#include "FRACTION.h"
#include <cmath>
#include <iostream>
   using namespace std;
    Fraction :: Fraction(): num(0), deno(0)
    {}
    Fraction :: Fraction(int num, int deno): num(num), deno(deno)
    {}
void Fraction :: setnum(int num){
  this->num=num;
}
void Fraction :: setdeno(int deno){
  this->deno=deno;
}

int Fraction :: getnum() const
{
    return this->num;
}

int Fraction :: getdeno() const
{
    return this->deno;
}

Fraction Fraction :: sum(const Fraction &F) const
{
    Fraction result;
    result.num = this->num+F.num;
    result.deno = this->deno+F.deno;
    return result;
}

Fraction Fraction :: subtract(const Fraction &F) const
{
    Fraction result;
    result.num = this->num-F.num;
    result.deno = this->deno-F.deno;
    return result;
}

Fraction Fraction :: multiply(const Fraction &F) const
{
    Fraction result;
    result.num = this->num*F.num;
    result.deno = this->deno*F.deno;
    return result;
}

Fraction Fraction :: division(const Fraction &F) const
{
    Fraction result;
    result.num = this->num*F.deno;
    result.deno = this->deno*F.num;
    return result;
}

void Fraction :: type()
{
    cout<<"numerator="; cin>>this->num;
    cout<<"denominator="; cin>>this->deno;
}

void Fraction :: show() const
{
    cout<<this->num<<"/"<<this->deno<<endl;
}
