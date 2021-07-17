#include<iostream>
using namespace std;

class base{
    public:
        virtual void show(){
            cout<<"this is base class"<<endl;
        }
};
class derived: public base{
    public:
        void show(){
            cout<<"this is derived class"<<endl;
        }
};
int main(){
    base *b;
    b=new base;
    b->show();
    delete b;
    b=new derived;
    b->show();
    delete b;

}