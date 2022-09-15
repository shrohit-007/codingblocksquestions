#include<bits/stdc++.h>
#define cout std::cout
#define cin std::cin
#define ll long long
int main() {
	int t;cin>>t;
    while(t--)
    {   
        int n;cin>>n;
        std::vector<int>v(n),l(n),r(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        l[0]=v[0];
        for(int i=1;i<n;i++)
        {
            l[i]=std::max(l[i-1],v[i]);
        }
        r[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=std::max(r[i+1],v[i]);
        }
		int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=std::min(l[i],r[i])-v[i];
        }
        cout<<sum<<"\n";
	}
	return 0;
}
