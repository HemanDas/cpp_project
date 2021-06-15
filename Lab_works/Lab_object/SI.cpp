#include<iostream>
using namespace std;

class Simpleinterest{
    public:
        double I , Principle, Time , Rate ;
        char a;
        void input()
        {
            cout<<"Enter Principal: "<<endl;
            cin>>Principle;
            cout<<"Enter time: "<<endl;
            cin>>Time;
            cout<<"Do you want to enter rate(y/n)"<<endl;
            cin>>a;
            if(a=='y'|| a=='Y')
                {
                    cout<<"Enter rate: "<<endl;
                    cin>>Rate;
                }else
                {
                    Rate=0.15;
                }
        }
        void output()
        {
            I=(Principle*Time*Rate)/100;
            cout<<"your intrest is: "<< I;
        }
};
int main()
{
    Simpleinterest I;
    I.input();
    I.output();
}