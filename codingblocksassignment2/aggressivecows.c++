#include<bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;
int main()
{
	int t=1;
	while(t--)
	{
		int n,c;std::cin>>n>>c;
    vector<ll>v;
    for(int i=1;i<=n;i++)
    {   
        ll a;cin>>a;
        v.emplace_back(a);
    }
    ll s=0,e=1e9;
    ll ans=0;
    std::sort(v.begin(),v.end());
    while(s<=e)
    {
        ll mid=s+(e-s)/2;
        ll c1=c-1;
        int dis=v[1]-v[0];
        //cout<<mid<<endl;
        for(int i=1;i<n-1;i++)
        {
            if(dis>=mid)
            {
                dis=v[i+1]-v[i];
                //cout<<i<<" ";
                c1--;
            }
            else
            {
                dis+=v[i+1]-v[i];
            }
        }
        //cout<<mid<<endl;
        if(dis>=mid)
        {
            c1--;
        }
        // cout<<c1<<endl;
        //cout<<c1<<" "<<mid<<endl;
        if(c1<=0)
        {
            ans=mid;
            //cout<<ans<<endl;
            s=mid+1;
        }
        else
            e=mid-1;
    }
    std::cout<<ans<<endl;
	}
}
