#include<iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"Enter the character";
	cin>>ch;
ch = tolower(ch);
if(ch == 'a'|| ch == 'e'||ch =='i'||ch == 'o'||ch == 'u'){
cout<< ch << " is a vowel"<<endl;
}else
if(isalpha(ch)){
	cout<<ch<<"  is constant.";
}else{
	cout<<" is not a alphabet.";	
}
}