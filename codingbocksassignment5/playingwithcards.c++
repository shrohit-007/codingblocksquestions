#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mx=10000000;
	vector<int>sz(mx+1,1);
	sz[0]=sz[1]=false;
	vector<int>prime;
	for(long i=2;i<=mx;i++)
	{
		if(sz[i])
		prime.push_back(i);
		for(long j=i*i;j<=mx;j+=i)
		{
			sz[j]=false;
		}
	}
	int n,q;cin>>n>>q;
	int sz1=q+2;
	stack<int>a[sz1];
	stack<int>b[sz1];
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;a[0].push(x);
	}
	for(int j=0;j<q;j++)
	{
		while(!a[j].empty())
		{
			if(a[j].top()%prime[j]==0)
			{
				b[j].push(a[j].top());
			}
			else
			a[j+1].push(a[j].top());
			a[j].pop();
		}
	}
	for(int i=0;i<sz1;i++)
	{
		while(!b[i].empty())
		{
			cout<<b[i].top()<<endl;
			b[i].pop();
		}
	}
	while(!a[q].empty())
	{
		cout<<a[q].top()<<endl;
		a[q].pop();
	}
}
