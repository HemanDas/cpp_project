#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char String[50];
    int len;
    cout<<"Enter a string"<<endl;
    cin>>String;
    
     len=strlen(String);
     cout<<"Length of the string: "<<len;
}