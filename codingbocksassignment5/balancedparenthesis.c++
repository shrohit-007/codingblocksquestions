#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;cin>>s;
	stack<char>st;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(!st.empty() and (s[i]=='}' and st.top()=='{') or (s[i]==']' and st.top()=='[') or (s[i]==')' and st.top()=='('
	) )
	{
		st.pop();
		continue;
	}st.push(s[i]);
	}
	if(st.empty())
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
