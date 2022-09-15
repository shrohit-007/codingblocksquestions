#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int k,n;cin>>k>>n;
	vector<ll>v;
	for(int i=0;i<n;i++)
	{
		ll a;cin>>a;
		v.push_back(a);
	}
	ll l=1,r=1e10;
	ll ans=0;
	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		int i=0;
		for(int j=0;j<k;j++)
		{
			ll tmp=mid;
			while(v[i]<=tmp)
			{
				tmp-=v[i];
				i++;
				if(i>=n)
				break;
			}
		}
		if(i>=n)
		{
			ans=mid;
			r=mid-1;
		}
		else
		l=mid+1;
	}
	cout<<ans<<endl;
	return 0;
}
