#include<iostream>
using namespace std;
class box{
    private:
        double length,breadth,height;
    public:
        box(double len, double bth, double ht){
            cout<<"constructor is called"<< endl;
            length=len;
            breadth=bth;
            height=ht;
        }
        double volume(){
            return length*breadth*height;
        }
};
int main(){
    box box1(10.5,5.5,4.5),box2(2.5,3.5,4.5);
    box *ptrbox;    
    cout<<"the address oof box 1: "<<&box1<<endl;
    //pointer is this kind of variable which hold/carry the address of other variable
    //in this case, box1 variable address is in boxptr variable
    ptrbox=&box1;
    
    //access the member function using member access operator(->)
    cout<<"the volume of box1: "<<ptrbox->volume()<<endl;
    
    //save the address of second object 
    cout<<"the address oof box 2: "<<&box2<<endl;
    ptrbox=&box2;
    cout<<"the volume of box2: "<<ptrbox->volume()<<endl;
    return 0;
}