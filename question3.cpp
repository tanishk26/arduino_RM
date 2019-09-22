#include<iostream>
#include<string>

using namespace std;

void copy(char ,char ,int );

void copy(char s1[],char s2[],int index)
{
	s2[index] = s1[index];
	if(s1[index]=='\0')
		return ;
	copy(s1,s2,index+1);

}
int main()
{
	char s1[100],s2[100];
	cout<<"Enter a string:"<<endl;
	cin.get(s1,100);
	copy(s1,s2,0);
	cout<<"copied string is:"<<endl;
	cout<<s2;
	return 0;
}