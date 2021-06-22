#include <iostream>
using namespace std;

class helloworld{
    public:
        helloworld(){
            cout<<"contructor is called"<<endl;
        }
        ~helloworld(){
            cout<<"destructor is called"<<endl;
        }
        void display(){
            cout<<"helloworld"<<endl;
        }
};
int main(){
    helloworld A;
    A.display();
    return 0;
}
