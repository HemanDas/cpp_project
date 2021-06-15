#include<iostream>
using namespace std;

class Simpleinterest{
    public:
        double calcinterest(double principle, double time, double rate=0.15){
            return (principle*time*rate/100);
        }
};
int main(){
    Simpleinterest si;
    double pin, t;
    float SI;
    cout<<"Enter principle and time, rate 15% is given default value";
    cin>>pin>>t;
    SI=si.calcinterest(pin,t);
    cout<<"the simple interest is:"<<SI;
}
