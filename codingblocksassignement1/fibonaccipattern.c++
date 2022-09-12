#include<iostream>
int main() {
	int n;std::cin>>n;
	int x=n*(n+1)/2;
	int a=0,b=1;
	int cur=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(cur==0 or cur==1)
			std::cout<<cur<<"    ";
			else
			{
				int c=a+b;
				a=b;
				b=c;
				std::cout<<c<<"    ";
			}
			cur++;
		}std::cout<<"\n";
	}
	return 0;
}
