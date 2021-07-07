#include<iostream>
using namespace std;

class count{
    int value;
    public:
        void input(){
            value=10;
        }
        count operator ++(){
            count c1;
            c1.value = ++value;
            return c1;
        }
        void display(){
            cout<<"The value ="<< value<<endl;
        }
};
int main(){
    count count1,count2;
    count1.input();
    ++count1;
    count1.display();
    count2=++count1;
    count2.display();
}