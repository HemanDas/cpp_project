#include <iostream>
using namespace std;

struct student
{
    char name[20],address[50];
    int roll;
};

int main()
{
    student s[3];
    cout << "Enter information of students: " << endl;

    for(int i = 0; i < 3; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter Address: ";
        cin >> s[i].address;

        cout << endl;
    }

    
    for(int i = 0; i < 3; ++i)
    {
        cout << "Roll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Address: " << s[i].address << endl;
    }

    return 0;
}