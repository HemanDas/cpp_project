#include<iostream>
using namespace std;

double getarea(double,double);

int main()
{
    double base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=getarea(base,height);
    cout<<"area of triangle is:"<<area<<endl;    
} 

double getarea(double b,double ht)
{
    double area;
    area=((0.5)*b*ht);        
    return area;
}