#include<iostream>
using namespace std;
 void add(int n1 ,int n2)
 {
    cout<<"addition of numbers: "<<n1+n2;
 }

 void add(int n1 , float n2)
 {
    cout<<"addition of numbers: "<<n1+n2;
 }

  void add(float n1 , int n2, float n3)
 {
    cout<<"addition of numbers: "<<n1+n2+n3;
 }

 int main()
 {
     add(5,15);
     cout<<endl;
     add(5,30.546f);
     cout<<endl;
     add(5.765f,15,30.556f);
     cout<<endl;
 }