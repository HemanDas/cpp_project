#include<iostream>
using namespace std;

class complex{
    float real=0,imag=0;
    public:
        void getdata(){
            float r,i;
            cout<<"enter the real and imaginary part"<<endl;
            cin>>r>>i;
            real=r;
            imag=i;
        }
        complex operator +(complex a)
        {
            complex temp;
            temp.real=real+a.real;
            temp.imag=imag+a.imag;
            return temp;
        }
         void display()
        {
            cout<<"Sum of complex numbers = "<<real<<"+"<<imag<<"j"<<endl;
        }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display();
}