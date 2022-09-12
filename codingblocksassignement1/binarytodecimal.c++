#include<bits/stdc++.h>
int main() {
	
	int n;std::cin>>n;
	int res=0;
	int j=0;
	while(n>0)
	{
		int i=(n&1);
		if(i&1)
		{
			res+=pow(2,j);
		}
		n/=10;
		j++;
	}
	std::cout<<res<<"\n";
	return 0;
}
