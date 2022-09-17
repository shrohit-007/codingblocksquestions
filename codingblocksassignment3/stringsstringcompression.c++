#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	int cnt=1;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			cnt++;
		}
		else
		{
			if(cnt!=1)
			{
				cout<<s[i]<<cnt;
			}
			else
			{
				cout<<s[i];
			}
			cnt=1;
		}
	}
	if(cnt!=1)
	cout<<s[n-1]<<cnt;
	else
	cout<<s[n-1];
	return 0;
}
