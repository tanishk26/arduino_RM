#include<iostream>

using namespace std;

int main()
{
	int c;
	for(int i=1, k=0; i<=5; i++,k=0)
	{
		c=1;
	for(int j=1; j<=5-i; j++)
	{
		cout<<" ";
	}
	while( k != (2*i)-1)
	{
	cout<<c;
	c++;
	k++;
	}
	cout<<endl;
	}
	return 0;
}