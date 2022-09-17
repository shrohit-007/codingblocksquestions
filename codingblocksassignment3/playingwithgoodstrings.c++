#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	int ans=0,cnt=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u')
		{
			cnt++;
			continue;
		}
		else
		{
			ans=max(ans,cnt);
			cnt=0;
		}
	}ans=max(ans,cnt);
	cout<<ans<<endl;
	return 0;
}
