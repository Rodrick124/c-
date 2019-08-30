#include "FRACTION.h"
#include <iostream>

using namespace std;

int main()
{
    Fraction a, b, c, d, e, f;
    cout<<"Enter your fractions A and B;"<<endl;
    a.type();
    b.type();
    c = a.sum(b);
    d = a.subtract(b);
    e = a.multiply(b);
    f = a.division(b);
    cout<<"Their sum is "<<endl;
    cout<<"------------------------------------------"<<endl;
    c.show();
    cout<<"------------------------------------------"<<endl;
    d.show();
    e.show();
    f.show();
    return 0;
}
