#include<iostream>
#include<stack>

using namespace std;

void showstack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<"\t"<<s.top();
		s.pop();
	}
	cout<<endl;
}

int main()
{
	stack <int> s;
	s.push(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<"The stack is:";
	showstack(s);

	cout<<endl;
	cout<<"Size is:"<<s.size()<<endl;
	cout<<"Top most element is:"<<s.top()<<endl;

	cout<<"After using pop function once :";
	s.pop();
	showstack(s);
	return 0;
}