#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	vector<int>v;
	vector<int>ans(n,-1);
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.push_back(a);
	}
	stack<int>st;
	for(int i=0;i<2*n-1;i++)
	{
		while(!st.empty() and v[st.top()]<v[i%n])
		{
			ans[st.top()]=i%n;
			st.pop();
		}
		st.push(i%n);
	}
	for(int i=0;i<n;i++)
	{
		if(ans[i]==-1)
		cout<<-1<<" ";
		else
		cout<<v[ans[i]]<<" ";
	}cout<<endl;

}
