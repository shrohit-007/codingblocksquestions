#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;v.push_back(a);
        }
		ll ans=0;
		for(int i=0;i<n;i++)
		{
			ll c=0;
			ll sum=0;
			for(int j=i;j<n+i;j++)
			{
				c+=v[j%n];
				sum=max(c,sum);
				if(c<0)
				c=0;
			}
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
