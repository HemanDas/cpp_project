#include<iostream>
using namespace std;

class animal{
    public:
        virtual void move()=0;// pure virtual function
        void move_again(){
            cout<<"animals uses different method to move around"<<endl;
        }
        animal(){
            cout<<"hello"<<endl;
        }
};
class dog: public animal{
    public:
        void move(){
            cout<<"dog walks";
        }
};
int main(){
    animal *b;
    dog d;
    b->move_again();//funtion call from animal class(base) using pointer
    d.move_again();//funtion call from derived class
    d.move();
}