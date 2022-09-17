#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	string st="";
	int n=s.length();
	for(int i=0;i<n-1;i++)
	{
		st+=s[i];
		if(s[i+1]<97)
		{
			cout<<st<<endl;
			st="";
		}
	}
	st+=s[n-1];
	if(st!="")
	cout<<st<<endl;
	return 0;
}
