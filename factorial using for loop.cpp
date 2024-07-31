#include<iostream>
using namespace std;
int main()
{
	int number,i;
	int factorial =1;
	cout<<"Enter a number:";
	cin>>number;
	for(i=1;i<=number;i++){
	factorial *= i;
}
cout<<"factorial of a number:"<<factorial<<endl;
}