#include<iostream>
int main() {
	int n;std::cin>>n;
	int zero=1;
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		std::cout<<1;
		else if(i==2)
		std::cout<<2<<"    "<<2;
		else
		{
			for(int j=1;j<=i;j++)
			{
				if(j==1 or j==i)
				std::cout<<i<<"    ";
				else
				std::cout<<0<<"    ";
			}
		}std::cout<<"\n";
	}
	return 0;
}
