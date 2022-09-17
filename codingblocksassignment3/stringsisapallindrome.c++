#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;cin>>s;
	int mid=s.length()/2;
	if(s.length()%2!=0)
	{
		mid++;
	}
	bool ok=false;
	for(int i=0;i<mid;i++)
	{
		if(s[i]!=s[s.length()-1-i])
		ok=true;
	}
	if(ok)
	cout<<"false"<<endl;
	else
	cout<<"true"<<endl;
	return 0;
}
