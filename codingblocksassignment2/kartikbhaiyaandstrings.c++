#include<bits/stdc++.h>
using namespace std;
int main() {
	int k;cin>>k;
	string s;cin>>s;
	map<char,long long>m;
	long long ans=0;
	long long i=0,j=0;
	int n=s.length();
	while(i<n)
	{
		m[s[i]]++;
		while(min(m['a'],m['b'])>k and j<=i)
		{
			m[s[j]]--;
			j++;
		}
		ans=max(ans,i-j+1);
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
