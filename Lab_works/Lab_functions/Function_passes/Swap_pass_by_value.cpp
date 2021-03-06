#include <iostream>
using namespace std;


void swap(int a, int b) 
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "Swap after call by value" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}