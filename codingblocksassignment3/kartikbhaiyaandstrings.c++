#include<bits/stdc++.h>
using namespace std;
int main() {
	int k;cin>>k;
	string s;cin>>s;
	int n=s.length();
	map<char,int>m;
	int i=0,j=0;
	int ans=0;
	while(i<n)
	{
		m[s[i]]++;
		while(min(m['a'],m['b'])>k and j<=i)
		{
			m[s[j]]--;
			j++;
		}
		ans=max(i-j+1,ans);
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
