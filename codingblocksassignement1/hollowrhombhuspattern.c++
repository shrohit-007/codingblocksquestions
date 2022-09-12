#include<iostream>
int main() {
	int n;std::cin>>n;
	int space=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		std::cout<<" ";
		if(i==1 or i==n)
		{
			for(int j=1;j<=n;j++)
			std::cout<<"*";
		}
		else
		{
			for(int j=1;j<=n;j++)
			{
				if(j==1 or j==n)
				std::cout<<"*";
				else
				std::cout<<" ";
			}
		}std::cout<<"\n";
	}
	return 0;
}
