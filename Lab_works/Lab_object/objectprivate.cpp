#include<iostream>
using namespace std;

class room{

    private:
        double length;
        double breadth;
        double height;

    public:
        double setarea(double len, double bth,double ht){
            length=len;
            breadth=bth;
            height=ht;
        }
         double calculatearea(){
            return length*breadth;
        }

        double calculatevolume(){
            return length*breadth*height;
        }
};

int main(){
    room room1;

    room1.setarea(45.6,55.4,76.5);

    cout<<"The area is "<<room1.calculatearea()<<endl;
    cout<<"the volume is "<<room1.calculatevolume()<<endl;
    
    return 0;
}