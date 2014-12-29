//4
//ONP
#include<iostream>
#include<string>
#include<stack>
using namespace std;
string infixtopostfix(string s)
{
	int i;
	string result;
	stack <char>res;
	for(i=0;i<s.length();i++)
	{
		switch(s[i])
		{
			case '+':
			while(res.top()=='*'||res.top()=='/'||res.top()=='-'||res.top()=='^')
			{
				result.push_back(res.top());
				res.pop();
			}
			break;
			case '-':
			while(res.top()=='*'||res.top()=='/'||res.top()=='^')
			{
				result.push_back(res.top());
				res.pop();
			}
			break;
			case '*':
			while(res.top()=='/'||res.top()=='^')
			{
				result.push_back(res.top());
				res.pop();
			}
			case '/':
			while(res.top()=='^')
			{
				result.push_back(res.top());
				res.pop();
			}
			break;
			case '(':
			res.push(s[i]);
			break;
			case ')':
			while(res.top()!='(')
			{
				result.push_back(res.top());
				res.pop();
			}
			if(res.top()=='(')
				res.pop();
			break;
			default:
			result.push_back(s[i]);
			break;
		}
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
		res.push(s[i]);
	}
	while(!res.empty())
	{
		result.push_back(res.top());
		res.pop();
	}
	return result;
}

int main()
{
	int t;
	string infix;
	cin>>t;
	while(t--)
	{
		cin>>infix;
		cout<<infixtopostfix(infix)<<endl;
	}
	return 0;
}