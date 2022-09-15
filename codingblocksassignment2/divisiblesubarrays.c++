#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		map<long long,long long>m;
		m[0]++;
		long long s=0;
		long long ans=0;
		for(int i=0;i<n;i++)
		{
			long long a;cin>>a;
			s=(s+a%n+n)%n;
			ans+=m[s];
			m[s]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
