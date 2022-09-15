#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		vector<ll>v,v1;
		for(int i=0;i<n;i++)
		{
			ll a;cin>>a;
			v.pb(a);
		}
		for(int i=0;i<m;i++)
		{
			ll a;cin>>a;
			v1.pb(a);
		}
		ll ans=0;
		ll msum=0;
		ll nsum=0;
		int i=0,j=0;
		while(i<n and j<m)
		{
			if(v[i]<v1[j])
			nsum+=v[i],i++;
			else if(v[i]>v1[j])
			msum+=v1[j],j++;
			else
			{
				ans+=max(nsum,msum);
				ans+=v[i];
				j++,i++;
				nsum=0,msum=0;
			}
		}
		while(i<n)
		nsum+=v[i],i++;
		while(j<m)
		msum+=v1[j],j++;
		ans+=max(nsum,msum);
		cout<<ans<<endl;

	}
	return 0;
}
