#include<iostream>
using namespace std;

class animal{
        public:
        animal(){
            cout<<"barking"<<endl;
        }
        ~animal(){}

};
class Dog: public animal
{
    public:
        Dog(){
            cout<<"eating.."<<endl;
        }
        ~Dog(){}
};
class Eat:public animal {
    public:
        Eat(){
            cout<<"Eats flesh"<<endl;
        }
        ~Eat(){}
};
int main(){
    Dog d;
    Eat d1;
}