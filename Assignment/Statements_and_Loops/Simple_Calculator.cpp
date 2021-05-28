# include <iostream>
#include <math.h>
using namespace std;

int main() {
    char opr;
    double num1, num2,n;

    cout << "Enter operator: +, -, *, /, ^: "<<endl;
    cin >> opr;


    switch(opr) {
        case '+':
            cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         n = num1 + num2;
         cout << "Sum = " << n;
         break;

        case '-':
            cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         n = num1 - num2;
         cout << "Subtraction = " << n;
         break;

        case '*':
            cout << "Enter two numbers: "<<endl;
         cin >> num1 >> num2;
         n = num1 * num2;
         cout << "Product = " << n;
         break;

        case '/':
            cout << "Enter Dividend: "<<endl;
         cin >> num1;
         cout << "Enter Divisor: "<<endl;
         cin >> num2;

         while(num2 == 0)
         {
            cout <<  "Divisor cannot be zero."<<endl;
            cout << "Enter divisor once again: " ;
            cin >> num2;
         }
         n = num1 / num2;
         cout << "Quotient = " << n;
         break;

        case '^':
         cout << "Enter the base: ";
         cin >> num1;
         cout << "Enter the exponent:";
         cin >> num2;
         n= pow(num1, num2);
         cout << "The result is = " << n;
         break;

        default:
            cout << "Error!"<<endl;
                    "Enter the correct operator";
            break;
    }

    return 0;
}