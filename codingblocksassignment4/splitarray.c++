#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int cnt=0;
void printstring(ll i,vector<ll>v,set<ll>ans2,ll sum1)
{
	if(i==v.size())
	{
		ll sum=0;
		for(auto &it:ans2)
		{
			sum+=v[it];
		}
		if(sum==sum1)
		{
			for(auto &k:ans2)
			{
				cout<<v[k]<<" ";
			}
			int j=0;
			cout<<"and ";
			for(int k=0;k<v.size();k++)
			{
				if(ans2.find(k)==ans2.end())
				{
					cout<<v[k]<<" ";
				}
			}
			cout<<endl;
			cnt++;
			return;
		}
		return;
	}
	ans2.insert(i);
	printstring(i+1,v,ans2,sum1);
	ans2.erase(i);
	printstring(i+1,v,ans2,sum1);
}
int main()
{
	int n;cin>>n;
	vector<long long>v;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		v.pb(a);
		sum+=a;
	}
	if(sum%2)
	{
		cout<<0;
		return 0;
	}
	set<long long>ans;
	printstring(0,v,ans,sum/2);
	cout<<cnt<<endl;
}
