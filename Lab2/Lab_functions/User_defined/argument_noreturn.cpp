#include<iostream>
using namespace std;

void getarea(double,double);

int main()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    getarea(base,height);
      
} 

void getarea(double b, double ht)
{
    float area;
    area=((0.5)*b*ht);
    cout<<"area of triangle is:"<<area<<endl;         
}