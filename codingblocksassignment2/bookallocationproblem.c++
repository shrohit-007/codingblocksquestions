#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;std::cin>>t;
    while(t--)
    {
        int n,m;std::cin>>n>>m;
        std::vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;std::cin>>a;
            v.emplace_back(a);
        }
        int l=0,r=1000000;
        int ans=0;
        while(l<=r)
        {
            int xy =0;
            int s=1;
            int mid=l+(r-l)/2;
            int i=0;
            while(i<n)
            {
                if(xy+v[i]<=mid)
                {
                    xy+=v[i];
                    i++;
                }
                else
                {
                    xy=0;
                    s++;
                }
                if(s>m)
                {
                    break;
                }
            }
            if(s<=m)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        std::cout<<ans<<"\n";
    }
	return 0;
}
