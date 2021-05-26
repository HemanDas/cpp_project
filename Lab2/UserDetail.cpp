#include <iostream>
using namespace std;

struct student
{
    char name[20],address[50];
    int roll;
};

int main() 
{
    student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter address: ";
    cin >> s.address;

    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Address: " << s.address << endl;
    return 0;
}