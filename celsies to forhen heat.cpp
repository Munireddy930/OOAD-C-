#include<iostream>
using namespace std;

float cel_to_fah(float N)
{
	return ((N*9/5)+32.0);
}
int N;
int main()
{
     float N = 36;
cout<<cel_to_fah(N);
return 0;
}