#include<iostream>
int main() {
	int n;std::cin>>n;
    int row=2*n+1;
    int space=2*n-1;
    for(int i=1;i<=row;i++)
    {
        if(i==n+1)
        {
            int cur=n;
            space=1;
            for(int j=1;j<=row;j++)
            {
                if(cur>=0)
                    std::cout<<cur<<" ",cur--;
                else
                    std::cout<<n-(row-j)<<" ";
            }std::cout<<"\n";
            continue;
        }
        int num=(row-space)/2;
        int x=n;
        for(int j=1;j<=num;j++)
        {
            std::cout<<x<<" ",x--;
        }
        for(int j=1;j<=space;j++)
            std::cout<<"  ";
        for(int j=num;j>=1;j--)
        {
            std::cout<<n-j+1<<" ";
        }
        if(i<n)
            space-=2;
        else
            space+=2;
        std::cout<<"\n";
    }
       
	return 0;
}
