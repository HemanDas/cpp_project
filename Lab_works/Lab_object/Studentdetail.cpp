#include<iostream>
using namespace std;

class student_attribute{
    private:
		char  name[30],address[50];
		int   rollno;
		float per;
	public:
		void input(){
            cout<<"Enter name"<<endl;
            cin>>name;
            cout<<"Enter address"<<endl;
            cin>>address;
            cout<<"Enter roll"<<endl;
            cin>>rollno;
            cout<<"Enter percentage"<<endl;
            cin>>per;

        }
		void output()
        {
            if (per<45)
            {
                cout<<"Student failed the exam";
            }else
            {
                cout<<"Name:"<<name<<"\nAddress:"<<address<<"\nrollno:"<<rollno<<"\nPercentage:"<<per<<endl;
                
            }

        }
};

int main(){
    student_attribute s1;
    s1.input();
    s1.output();
}
