#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num;
	cout<<"Enter the floating point number:";
	cin>>num;
	int rounded = (num - floor(num) <0.5) ?floor(num ):ceil (num);
	cout<<"Enter the nearest rounded floating point:"<<rounded<<endl;
}