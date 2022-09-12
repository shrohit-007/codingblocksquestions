#include<iostream>
int main() {
	int n;std::cin>>n;
    n=2*n-1;
    int space=1;
    int cur=n/2;
    for(int i=1;i<=n;i++)
    {
        if(i==1 or i==n)
        {
            for(int j=1;j<=n;j++)
            {
                std::cout<<"*";
            }
            std::cout<<"\n";
            continue;
        }
        else
        {
            for(int j=1;j<=cur;j++)
            {
                std::cout<<"*";
            }
            for(int j=1;j<=space;j++)
            {
                std::cout<<" ";
            }
            for(int j=1;j<=cur;j++)
            {
                std::cout<<"*";
            }
            if(i<n/2+1)
                space+=2,cur--;
            else
                space-=2,cur++;
        }
        std::cout<<"\n";
    }
	return 0;
}
