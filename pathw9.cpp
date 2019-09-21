#include<iostream>

using namespace std;

int main()
{
	for(int i=1; i<=5; i++)
	{
	for(int j=1; j<=i; j++)
	{
		if(i==j)
			cout<<"*";
		else if(j==1)
			cout<<"*";
		else if(i==5)
			cout<<"*";
		else
			cout<<" ";
	}
	cout<<endl;
	}
	return 0;
}