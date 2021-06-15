#include<iostream>
using namespace std;

class Simpleinterest
{
    public:
        float SI;
        double calcinterest1(double principle, double time, double rate=0.15)
        {
            SI=(principle*time*rate/100);
            return 0;
        }
        double calcinterest(double principle, double time, double r)
        {
            SI=(principle*time*r/100);
            return 0;
        }
        double interest()
        {
            cout<<"the simple interest is:"<<SI;
            return SI;
        }
};
int main()
{
     Simpleinterest I;
      float principle,r,time;
      char decision;
        cout<<"Enter principle:";
        cin>>principle;
        cout<<"Enter time:";
        cin>>time;
        cout<<"Do you want to enter rate Y/N"<<endl;
        cin>>decision;
        
                if(decision=='Y'|| decision=='y')
                {
                    cout<<"enter rate";
                    cin>>r;
                    I.calcinterest(principle,time,r);
                }


                else
                {
                    I.calcinterest1(principle,time);
                }
    I.interest();
}

