#include<iostream>
using namespace std;

class uniary{
        int a,b,c;
    public:
        void getdata(int x,int y,int z)
        {   
            a=x;
            b=y;
            c=z;
        }
        void operator -()
        {
            a=-a;
            b=-b;
            c=-c;
        }
        void display()
        {
            cout<<"value of a:"<<a<<endl;
            cout<<"value of b:"<<b<<endl;
            cout<<"value of c:"<<c<<endl;
        }
};
int main(){
    uniary obj1;
    obj1.getdata(10,20,5);
    obj1.display();
    -obj1;
    obj1.display();
}