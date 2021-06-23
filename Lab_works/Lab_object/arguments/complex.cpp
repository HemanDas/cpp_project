#include<iostream>
using namespace std;

class complex{
    public:
        double real;
        double imaginary;

        complex input(){
            cout<<"Enter the real and imaginary value."<<endl;
            cin>>real;
            cin>>imaginary;
        }

        complex sum(complex c1, complex c2){
            complex c3;
            c3.real= c1.real+c2.real;
            c3.imaginary = c1.imaginary+c2.imaginary;
            return c3;
        }

        void output(){
            cout<<"The sum of the complex value is : "<<real<<"+"<<imaginary<<"j"<<endl;
        }

};

int main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c3.sum(c1,c2);
    c3.output();
}