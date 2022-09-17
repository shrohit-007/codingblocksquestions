#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]<97)
		{
			cout<<char(s[i]+32);
		}
		else
		cout<<char(s[i]-32);
	}
	return 0;
}
