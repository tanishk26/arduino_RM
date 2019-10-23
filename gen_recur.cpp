#include<iostream>

using namespace std;

int gen(int n)		//RECURSION
{
	int dig,sum=0;
	while(n!=0)
	{
		dig = n%10;
		sum+=dig;
		n=n/10;
	}
		if(sum>9)
			gen(sum);
		else
			return sum;
	
}

int main()
{
	int n,c=0,sum=0,dig;
	cout<<"Enter number:"<<endl;
	cin>>n;
	cout<<"Sum is:"<<gen(n);

	return 0;
}
