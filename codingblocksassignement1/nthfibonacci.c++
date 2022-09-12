#include<iostream>
int main() {
	int n;std::cin>>n;
	if(n==0 or n==1)
	std::cout<<n<<"\n";
	else
	{
		int a=0,b=1,c;
		for(int i=2;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		std::cout<<c<<"\n";
	}
	return 0;
}
