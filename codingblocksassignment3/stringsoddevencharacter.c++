#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<char(s[i]+1);
		}
		else
		cout<<char(s[i]-1);
	}
	return 0;
}
