#include<iostream>

using namespace std;

void f(int ,char ,char ,char );
int c=0;
void f(int n, char s,char t, char d)
{
	if(n==1)
	{	
		cout<<"1 moves from "<<s<<" to "<<d<<endl;
		c++;
		return ;
	}


	f(n-1,s,d,t);
	cout<<n<<" moves from "<<s<<" to "<<d<<endl;
	c++;
	f(n-1,t,s,d);
}

int main()
{
	int n;
	char c1,c2,c3;
	cout<<"Enter n:";
	cin>>n;
	f(n,'A','B','C' );
	cout<<c;
	return 0;
}
