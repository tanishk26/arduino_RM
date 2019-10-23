#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1,s2;
	int k,flag,count=0,z;
	cout<<"Enter string :";
	getline(cin,s1);
	cout<<"Enter sentence:";
	getline(cin,s2);
	int l1=s1.length();
	int l2 = s2.length();
	for(int i=0; i<l2; i++)
	{flag=0;
		for(int j=0;j<l1;j++)
		{    
				if(s1[j]==s2[i])
			{	flag=1;
				for(k=i+1,z=j+1; z<l2 ; k++,z++)
				{
					if(s1[z] != s2[k])
					{
						flag = 0;break;
					}
				}
				if(flag==1)
					count++;
			}
		}
		
	}
	cout<<"Substring is found "<<count<<"number of times in the string"<<endl;
	return 0;
}