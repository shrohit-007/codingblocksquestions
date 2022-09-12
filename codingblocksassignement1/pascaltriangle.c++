#include<bits/stdc++.h>
int c[103][103];
void ncrpascal(int n,int r)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=std::min(i,r);j++)
        {
            if(j==0 or j==i)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
}
int main() {
	int n;std::cin>>n;
    std::memset(c,0,sizeof(c));
    ncrpascal(100,100);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<c[i][j]<<"	";
        }
        std::cout<<"\n";
    }
	return 0;
}
