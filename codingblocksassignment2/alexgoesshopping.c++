#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
set<ll> smdiv(ll n)//prime factorization
{
    // if divisible by 2
    set<ll>v;
    for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			v.insert(i);
			v.insert(n/i);
		}
	}
	return v;
}
int main() {
	ll n;cin>>n;
	map<ll,ll>m;
	for(int i=0;i<n;i++)
	{
		ll a;cin>>a;
		m[a]++;
	}
	int q;cin>>q;
	while(q--)
	{
		ll a,k;cin>>a>>k;
		set<ll>tmp=smdiv(a);
		ll x=0;
		for(auto &it:tmp)
		{
			auto it1=m.find(it);
			if(it1!=m.end())
			{
				x+=it1->second;
			}
		}
		if(x>=k)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
	return 0;
}
