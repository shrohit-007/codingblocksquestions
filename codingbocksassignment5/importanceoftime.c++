#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	queue<int>q;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		q.push(a);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		while(q.front()!=a)
		{
			ans++;
			int x=q.front();q.pop();
			q.push(x);
		}
		ans++;
		q.pop();
	}
	cout<<ans<<endl;
	return 0;
}
