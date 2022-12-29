#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		queue<int>q;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<k;i++)
		{
			if(v[i]<0)q.push(v[i]);
		}
		if(q.size()==0)
		cout<<0<<" ";
		else
		cout<<q.front()<<" ";
		for(int i=k;i<n;i++)
		{
			if(!q.empty() and v[i-k]==q.front())
			{
				q.pop();
			}
			if(v[i]<0)
			q.push(v[i]);
			if(!q.empty())
			{
				cout<<q.front()<<" ";
			}
			else cout<<0<<" ";
		}
		cout<<endl;
	}
}
