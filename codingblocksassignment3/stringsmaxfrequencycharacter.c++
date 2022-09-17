#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	map<char,int>m;
	int x=0;
	char y;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
		if(x<m[s[i]])
		{
			x=m[s[i]];
			y=s[i];
		}
	}
	cout<<y;
	return 0;
}
