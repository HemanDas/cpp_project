#include<iostream>
using namespace std;

class base{
    public:
        void show(){
            cout<<"this is base class";
        }
};
class derived: public base{
    public:
        void show(){
            cout<<"this is derived class";
        }
};
int main(){
    base b;
    b.show();
    derived d;
    d.show();
}