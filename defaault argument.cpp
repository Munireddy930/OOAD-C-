#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0)
{
	return (x+y+z+w);
}
int main(){
	cout<<sum(10,15)<<endl;
	cout<<sum(10,15,20)<<endl;
	cout<<sum(10,15,20,30)<<endl;
}