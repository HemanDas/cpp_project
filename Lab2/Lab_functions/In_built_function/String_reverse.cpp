#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char String[50];
    cout<<"Enter a string"<<endl;
    cin.getline(String,50);
    
     cout<<"The Reversed string is "<<strrev(String);
}