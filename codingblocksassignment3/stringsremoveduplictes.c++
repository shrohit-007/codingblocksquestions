#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(i+1<n)
		{
			if(s[i]==s[i+1])
			{
				continue;
			}
			else
			{
				cout<<s[i];
			}
		}
		else
		cout<<s[i];
	}
	return 0;
}
