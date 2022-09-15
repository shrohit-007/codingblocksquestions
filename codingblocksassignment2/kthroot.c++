#include<bits/stdc++.h>
#define ll long long
int main() {
	int t;std::cin>>t;
    while(t--)
    {
        ll n,k;std::cin>>n>>k;
        ll x=1,y=1e8;
        ll ans=0;
        if(k==1)
        {
            std::cout<<n<<"\n";
            continue;
        }
        while(x<=y)
        {
            ll mid=x+(y-x)/2;
            ll cnt=0;
            ll tmp=1;
            while(tmp<=n)
            {
                tmp*=mid;
                cnt++;
				if(cnt>k)
				{
					break;
				}
            }
            if(tmp>n)
            {
                cnt--;
            }
            if(cnt>=k)
            {
                ans=mid;
                x=mid+1;
            }
            else
            y=mid-1;
        }
        std::cout<<ans<<"\n";

    }
	return 0;
}
