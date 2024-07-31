#include<iostream>
using namespace std;
int main()
{	
	int a,b,c;
	cout<<"enter three integers:";
	cin>>a>>b>>c;
	int largest = (a>b)?((a>c)? a:c) :((b>c)? b:c);
	cout<<"the largest number is:"<<largest <<endl;
}