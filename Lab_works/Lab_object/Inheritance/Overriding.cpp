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
        void eat(){
            cout<<"eats bone"<<endl;
        }
};
int main(){
    Dog d1;
    d1.animal::eat();
    d1.eat();
}