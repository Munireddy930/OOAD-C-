#include<iostream>
using namespace std;
int main ()
{
	int num,num1 ,num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
string result = (num1==num2)? "the numbers are equal."  :  "the numbers are not equal.";
	cout<<result<<endl;
	return 0;

}