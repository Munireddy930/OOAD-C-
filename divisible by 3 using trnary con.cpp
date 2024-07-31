#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the integers:";
	cin>>num;
	string result = (num%3==0)? "number is divisible by 3." : "number is not divisible by 3.";
	cout<<result<<endl;
}