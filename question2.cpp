#include<iostream>

using namespace std;

int main()
{
	int a[100],n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	cout<<"Enter the array elements:"<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"Entered array elements are:"<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\t";
	cout<<endl;


	for(int i=0; i<n; i++)
	{
		if(a[i] < a[i+1])
			{
				for(int j=i; j<=n-1; j++)
					{
						a[j]=a[j+1];
					}
				n--;
				i=i-1;
			}
	}
	
	cout<<"Array is:"<<endl;
	for(int k=0; k<n; k++)
		cout<<a[k]<<"\t";
	return 0;
}