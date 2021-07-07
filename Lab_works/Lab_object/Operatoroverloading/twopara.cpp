#include<iostream>
using namespace std;


class Distance1 {
    public:
        int ft,in;
        friend Distance1 operator +(Distance1 d1, Distance1 d2);
        Distance1(){
            ft=0;
            in=0;

        }
        Distance1(int ft,int in){
            this ->ft =ft;
            this ->in=in;
        }
        friend Distance1 operator +(Distance1 d1, Distance1 d2)
        {
            Distance1 d3;
            d3.ft= d1.ft+d2.ft;
            d3.in= d1.in+d2.in;
            return d3;
        }
        void display(){
            cout<<"the distance \nft="<<ft<<"\ninch="<<in<<endl;
        }
};
int main()
{
    Distance1 d2(20,30),d4,d1(10,20);
    d4=d1+d2;
    d4.display();
}