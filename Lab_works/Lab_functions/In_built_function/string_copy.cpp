#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char String[50],String2[50];
    cout<<"Enter a string"<<endl;
    cin>>String;
    
     cout<<"The copied string is "<<strcpy(String2,String);
}