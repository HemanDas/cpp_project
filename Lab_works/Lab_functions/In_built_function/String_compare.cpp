#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char String[50],String2[50];
    cout<<"Enter a string"<<endl;
    cin.getline(String,50);
    cout<<"Enter the second string "<<endl;
    cin.getline(String2,50);
    if (strcmp(String,String2)==0)
    {
        cout<<"Both the entered string is same"<<endl;
    }else
    {
        cout<<"Both string are different"<<endl;
    }
}