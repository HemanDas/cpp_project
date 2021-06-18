#include<iostream>
using namespace std;

class point
{
    private:
            int x,y;

    public:
            point(int x1,int y1)
            {
                x=x1;
                y=y1;
            }
            point()
            {
                x=5;
                y=10;
            }
            int getX()
            {
                return x;

            }
            int getY()
            {
                return y;
            }
};
int main()
{
    point p,p1(10,20);
    cout<< "When no argument is passed: " << endl;
    cout<<"x="<<p.getX()<<",y="<<p.getY()<<endl;
    cout<<"When (10, 20) is passed." << endl;
    cout<<"x="<<p1.getX()<<",y="<<p1.getY()<<endl;
}