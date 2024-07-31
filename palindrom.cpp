#include<iostream>
using namespace std;
int main()
{
	int num,original,reversed=0,remainder;
	cout<<"Enter a number:";
	cin>>num;
	original=num;
	while(num)
	{
		remainder = num %10;
		reversed =reversed*10+remainder;
		num/=10;
	}
		cout<<(original== reversed ?  "palindrome" :"Not a palindrome");
return 0;
}