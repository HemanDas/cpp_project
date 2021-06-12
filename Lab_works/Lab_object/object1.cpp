#include<iostream>
using namespace std;

class room{

    public:
        double length;
        double breadth;
        double height;

    double calculatearea(){
        return length*breadth;
    }

    double calculatevolume(){
        return length*breadth*height;
    }
};

int main(){
    room room1;

    room1.length=45.5;
    room1.breadth=56.2;
    room1.height=75.6;

    cout<<"The area is "<<room1.calculatearea()<<endl;
    cout<<"the volume is "<<room1.calculatevolume()<<endl;
    return 0;
}