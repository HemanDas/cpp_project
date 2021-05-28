// formula sqrt(s*(s-a)*(s-b)*(s-c))

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
    int A,B,C;
    float area,S;

    cout<<"enter 3 sides of a triangle"<<endl;
    cout<<"Enter side a:";
    cin>>A;
    cout<<"enter side b:";
    cin>>B;
    cout<<"enter side c:";
    cin>>C;

    S=(A+B+C)/2;
    area = sqrt(S*((S-A)*(S-B)*(S-C)));
    if (area>0){
        cout<<"The area of triangle is:"<<area ;
    }else{
        cout<<"The triangle does not exist";
    }
    return 0;
}