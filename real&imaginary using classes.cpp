#include <bits/stdc++.h>
using namespace std;

class Complexnumbers
{
    public:
    int real;
    int imaginary;
    Complexnumbers(int r,int c)
    {
        this->real=r;
        this->imaginary=c;
    }
    
    void plus(Complexnumbers c2)
    {
        real+=c2.real;
        imaginary+=c2.imaginary;
    }
    
    void multiply(Complexnumbers c2)
    {
        // (a+ib) * (c+id);
        // a*b+a*id+b*ib-bd
        int x = real*(c2.real);
        int y = real*(c2.imaginary);
        int z = imaginary*(c2.real);
        int a = imaginary*(c2.imaginary);
         real = x - a;
         imaginary = y + z;
        // real=real*c2.real;
        // imaginary=imaginary*c2.imaginary;
    }
    
    void display()
    {
        cout<<real<<' '<<"+"<<' '<<"i"<<imaginary<<endl;
    }
};

int main()
{
    Complexnumbers c1(4,5);
    Complexnumbers c2(3,1);
    c1.plus(c2);
    c1.multiply(c2);
    c1.display();
    c2.display();
    
	return 0;
}