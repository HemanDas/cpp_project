#include<iostream>
using namespace std;

class animal{
        public:
        animal(){
            cout<<"barking"<<endl;
        }
};
class mammal{
    public:
        mammal(){
            cout<<"jumping.."<<endl;
        }
};
class Dog: public animal
{
    public:
        Dog(){
            cout<<"eating.."<<endl;
        }
};
class Eat:public Dog , public mammal
{
    public:
        Eat(){
            cout<<"Eats flesh"<<endl;
        }
};
int main(){
    Eat d1;
}