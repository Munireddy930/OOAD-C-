#include<iostream>
using namespace std;
int calculatorsum(int a,int b,int c,int d){
return a+b+c+d;	
}
int main(){
	int a,b,c,d;
	cout<<"Enter the values upto 4:";
	cin>> a>>b>>c>>d;
	int sum = calculatorsum(a,b,c,d);
	cout<<"sum is"<<sum;
	return 0;
}
