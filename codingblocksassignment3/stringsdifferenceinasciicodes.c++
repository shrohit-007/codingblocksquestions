#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int n=s.length();
	for(int i=0;i<n-1;i++)
	{
		int x=s[i+1]-s[i];
		cout<<s[i]<<x;
	}cout<<s[n-1];
	return 0;
}
