#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the three integers";
    cin>>num1>>num2>>num3;
    if(num1>=num2&&num2>=num3)
    cout<<"Largest number<<num1";
    else if(num2>=num2&&num2>=num3)
       cout<<"Larget number"<<num2;
    else
       cout<<"Largest number"<<num3;
       return 0;
}