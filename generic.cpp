#include<iostream>

using namespace std;

int main()
{
	int n,c=0,sum=0,dig;
	cout<<"Enter number:"<<endl;
	cin>>n;
	int num = n;
	while(n!=0)
	{
		c++;
		dig = n%10;
		sum+=dig;
		n=n/10;
	}
	for(int i=0; i<c;i++)
	{
		if(sum>9)
		{
			n=sum;
			sum=0;
			while(n!=0)
			{
				dig=n%10;
				sum+=dig;
				n=n/10;
			}
		}
		else
			break;
	}
	cout<<"Sum is:"<<sum;
	return 0;
}