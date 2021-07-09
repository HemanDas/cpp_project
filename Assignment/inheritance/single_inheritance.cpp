#include<iostream>
using namespace std;

class animal{
        public:
        void eat(){
            cout<<"eating.."<<endl;
        }
};
class Dog: public animal
{
    public:
        void bark(){
            cout<<"barking";
        }
};
int main(){
    Dog d1;
    d1.eat();
    d1.bark();
}