#include<iostream>
using namespace std;
int main()
{
	int reverse;
	string s;
	cout<<"Enter a string";
	cin>>s;
	string rev =s;
	reverse (rev.begin(),rev.end());
	if(s==rev){
		   cout<<"palindrome";
		else
		{
		cout<<"is not a palindrom";
			return 0;
		}
	}
}