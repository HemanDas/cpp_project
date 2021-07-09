#include<iostream>
using namespace std;

class circle{
        private:
            double radius;
        public:
            void input(double r)
            {
                radius=r;
            }
            double compute_area()
            {
                return 3.14*radius*radius;
            }
};
int main()
{
    circle obj;
    obj.input(5.5);
    //cout<<"radius is:"<<obj.r<<endl;
    cout<<"area is:"<<obj.compute_area()<<endl;
    return 0;
}