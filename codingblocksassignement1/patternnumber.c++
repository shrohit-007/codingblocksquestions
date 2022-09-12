#include<iostream>
int main() {
	int n;std::cin>>n;
	int cur=1;
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=cur;j++)
		{
			std::cout<<x<<"    ",x++;
		}
		std::cout<<"\n";
		cur++;
	}
	return 0;
}
