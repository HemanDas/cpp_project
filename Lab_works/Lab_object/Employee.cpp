#include<iostream>
using namespace std;

class employee{
    private:
		char  name[30];
		double  ID;
		float salary;
	public:
		void input(){
                 cout<<"Enter name"<<endl;
                cin>>name;
                cout<<"Enter Member ID"<<endl;
                cin>>ID;
                cout<<"Enter salary"<<endl;
                cin>>salary;
        }
		void output()
        {
           cout<<"Name:"<<name<<"\tMember ID:"<<ID<<"\tSalary:"<<salary<<endl;
           
        }
};

int main(){
    employee s[5];
    for (int i=0; i<5; i++){
        s[i].input();

    }
    for (int i=0; i<5; i++){
        s[i].output();

    }
    
    
}