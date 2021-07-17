#include<iostream>
using namespace std;

class animal{
        public:
        void Animal(){
            cout<<"barking"<<endl;
        }
};
class mammal:public virtual animal{
    public:
        void Mammal(){
            cout<<"jumping.."<<endl;
        }
};
class Dog: public virtual animal
{
    public:
        void dog(){
            cout<<"eating.."<<endl;
        }
};
class Eat:public Dog , public mammal
{
    public:
        void eat(){
            cout<<"Eats flesh"<<endl;
        }
};
int main(){
    Eat d1;
    d1.Animal();
    d1.Mammal();
    d1.dog();
    d1.eat();
}