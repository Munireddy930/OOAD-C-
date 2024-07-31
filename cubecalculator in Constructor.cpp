#include<iostream>
using namespace std;
class cubecalculator {
	private: 
	    int number;
	public:
		cubecalculator():number(0){}
	cubecalculator (int num):number(num){
		displaycube();
}
void displaycube(){
	cout<<"cube of"<<number<<"is:"<<(number*number*number)<<endl;
}
};
int main(){
	int n;
	cout<<"Enter a positive number:";
	cin>>n;
	for(int i=1;i<=n;++i){
	cubecalculator cal(i);	
	}
    return 0;
    }

