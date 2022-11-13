//do some mathematical operations
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int choice;
    cout<<"Enter your num1 :";
    cin>>num1;
    cout<<"Enter your num2 :";
    cin>>num2;
    cout<<"Enter choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"sum of two numbers is :"<<num1+num2;
        break;
        case 2:
        cout<<"Difference of two numbers is :"<<num1-num2;
        break;
        case 3:
        cout<<"Multiplication of two numbers is :"<<num1*num2;
        break;
        case 4:
        cout<<"division of two numbers is :"<<num1/num2;
        break;
        default:
        cout<<"operation is not defined";
    }
    return 0;
}