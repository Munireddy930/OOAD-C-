#include<iostream>
void printpattern(int n){
for(int i=1;i<=n;++i){
	for(int j=1;j<=i;++j){
		std::cout<<j<<"";
	}
std::cout<<std::endl;
}
}
int main(){
	int num;
	std::cout<<"Enter the number of rows:";
	std::cin>>num;
	
	printpattern(num);
	return 0;
}

