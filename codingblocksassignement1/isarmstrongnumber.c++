#include<bits/stdc++.h>
int main() {
	int n;std::cin>>n;
	int res=0;
	int len=0;
	int len1=n;
	while(n>0)
	{
		n/=10;
		len++;
	}n=len1;
	while(n>0)
	{
		res+=pow(n%10,len);
		n/=10;
	}
	if(res==len1)
	{
		std::cout<<"true"<<"\n";
	}
	else
	{
		std::cout<<"false"<<"\n";
	}
	return 0;
}
