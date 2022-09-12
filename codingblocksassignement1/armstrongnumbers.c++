#include<bits/stdc++.h>
int main() {
	int n;std::cin>>n;
	int n1;std::cin>>n1;
	for(int i=n;i<=n1;i++)
	{
		int num=i;
		int res=0;
		int len=0;
		while(num>0)
		{
			num/=10;
			len++;
		}
		num=i;
		while(num>0)
		{
			res+=pow(num%10,len);
			num/=10;
		}
		if(res==i)
		std::cout<<res<<"\n";

	}
	return 0;
}
