#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char String[50],String2[50];
    cout<<"Enter a string"<<endl;
    cin.getline(String,50);
    cout<<"Enter the second string "<<endl;
    cin.getline( String2,50);
    
     cout<<"The concatenated string is "<<strcat(String, String2);
}