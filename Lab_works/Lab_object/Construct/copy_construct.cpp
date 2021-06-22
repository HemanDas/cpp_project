#include<iostream>
using namespace std;

class marks{
    private:
        double total;

    public:
        marks(double mark){
            total=mark;
        }
        marks(marks &obj){
            total=obj.total;
        }
    double calculatepercentage(){
        return total/5;
    }
};

int main(){
    marks mark1(325);
    cout<<"percentage of mark1:"<<mark1.calculatepercentage()<<endl;
    marks mark2=mark1;
    cout<<"percentage of mark2:"<<mark2.calculatepercentage()<<endl;
}