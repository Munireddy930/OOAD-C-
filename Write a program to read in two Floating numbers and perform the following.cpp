#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float num1,num2;
	cout<<"Enter the first floating point";
	cin>>num1;
	cout<<"Enterthe second  floating point:";
	cin>>num2;
	
	float addition=num1+num2;
		cout<<"addition:"<<addition <<endl;
		
	float subtraction= num1-num2;
	cout<<"subtraction:"<<subtraction<<endl;
	
	float multiplication = num1*num2;
	cout<<"multiplication:"<<multiplication<<endl;
	
	if(num2!=0){
	float division = num1/num2;
	cout<<"division:"<<division<<endl;
	}else{
		cout<<"error:division by zero!"<<endl;
	}
	if(num2!=0){
	float  modulodivision = fmod(num1,num2);
	cout<<" modulo division:"<<modulodivision<<endl;
		}else{
		cout<<"erroe:modulo division by zero!"<<endl;
	}
		
}
