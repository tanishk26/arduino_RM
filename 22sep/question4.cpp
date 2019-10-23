#include<iostream>

using namespace std;

int main()
{
	double pi=3.1415926536,term,sum=0,x,m,n;
	cout<<"Enter angle:"<<endl<<x;
	cout<<"Enter number of turns:"<<endl<<n;
	x=x*pi/180;
	term=x;
	for(m=1;m<=n;m++)
	{
		sum = sum+term;
		term = ((-1)*x*x)/(2*m*(2*m+1));
	}
	cout<<"value of sine series :"<<sum;
	return 0;
}