#include<bits/stdc++.h>
using namespace std;
void printstring(string s,long long i,long long num)
{
	if(i==s.length())
	{
		cout<<num<<endl;
		return;
	}
	num+=pow(10,(s.length()-i-1))*(s[i]-'0');
	printstring(s,i+1,num);
}
int main()
{
	string s;cin>>s;
	long long num=0;
	printstring(s,0,num);
}
