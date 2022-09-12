#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;std::cin>>n;
    int start=n/2+1;
    int cur=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1 or i==n)
        {
            for(int j=1;j<=n;j++)
            {
                std::cout<<"*   ";
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(j<start)
                {
                    std::cout<<"*   ";
                }
                else if(cur>0)
                {
                    std::cout<<"    ";
                    cur--;
                }
                else
                {
                    std::cout<<"*   ";
                }
            }
            if(i<n/2+1)
            {
                start--;
            }
            else
                start++;
            int dif=n/2+1-start+1;
            cur=2*dif-1;
        }
        std::cout<<"\n";
    }
}
