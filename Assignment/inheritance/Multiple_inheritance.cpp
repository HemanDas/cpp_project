#include<iostream>
using namespace std;

class animal{
    public:
        void eat(){
            cout<<"eating.."<<endl;
        }
};
class mammal{
    public:
        void play(){
            cout<<"jumping.."<<endl;
        }
};
class Dog: public animal, public mammal
{
    public:
        void bark(){
            cout<<"barking"<<endl;
        }
};
int main(){
    Dog d1;
    d1.eat();
    d1.bark();
    d1.play();
}