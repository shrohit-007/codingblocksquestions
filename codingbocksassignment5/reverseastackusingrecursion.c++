#include<bits/stdc++.h>
using namespace std;
void generate(stack<int>&st,int ind,int ele)
{
	if(ind==st.size())
	{
		st.push(ele);
		return;
	}
	int x=st.top();
	st.pop();
	generate(st,ind,ele);
	st.push(x);
}
int main()
{
	int n;cin>>n;
	stack<int>st;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		st.push(a);
	}
	for(int i=0;i<n;i++)
	{
		int x=st.top();
		st.pop();
		generate(st,i,x);
	}
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}
