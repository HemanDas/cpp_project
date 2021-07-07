#include <iostream>
using namespace std;

class Distance {
    public:
        int ft,in;
        Distance(){
            ft=0;
            in=0;

        }
        Distance(int ft,int in){
            this ->ft =ft;
            this ->in=in;
        }
        Distance operator +(Distance d2)
        {
            Distance d3;
            d3.ft=this -> ft+d2.ft;
            d3.in=this -> in+d2.in;
            return d3;
        }
        void display(){
            cout<<"the distance \nft="<<ft<<"\ninch="<<in<<endl;
        }
};
int main()
{
    Distance d1(10,20),d2(20,30),d4;
    d4=d1+d2;
    d4.display();
}