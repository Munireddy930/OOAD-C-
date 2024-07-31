#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	
	do{
		if(a>b) a-=b;
		else b-= a;
	}while(a != b);
cout<<a<<endl;
return 0;
}
