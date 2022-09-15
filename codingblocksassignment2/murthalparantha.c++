#include<bits/stdc++.h>
using namespace std;
int main() {
	int p;cin>>p;
    int n;cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        long long a;cin>>a;
        v.push_back(a);
    }
    long long l=1,r=1e9;
    long long ans=0;
    while(l<=r)
    {
        long long mid=l+(r-l)/2;
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            long long x=2*mid/v[i];
            cnt+=(sqrt(1+4*x)-1)/2;
        }
        //cout<<cnt<<" "<<mid<<endl;
        if(cnt>=p)
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
